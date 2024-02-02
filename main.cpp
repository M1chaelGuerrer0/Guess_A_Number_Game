#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "game.h"

// Author: Michael Guerrero
 // Guess_A_Number_Game
 //  Generates random integer from 0 ... 100, in the game.cpp file linked to the game.h header.
 //  Gets an integer from the user for guessing and a character for playing again, both in the game.cpp file linked to the game.h header.
 //  Each attempt at the answer will provide a higher or lower prompt.
 //  Once the user guesses right a prompt to play again will occur.
 //  Compiles and executes at the command prompt.

int main() { // main
    printf("\nGuess a number between 0 to 100.\n");
    
    // variables
    int randNumber = random(); // uses a header file method
    int user_guess;
    int user_try_again;
    
    do { // do while
    printf("\nEnter a number: ");
    user_guess = user_input_int(); // uses a header file method
    if(user_guess > randNumber){ 
        printf("\nLower than %d.", user_guess);
    }
    else if(user_guess < randNumber) {
        printf("\nHigher than %d.", user_guess);
    }
    else { 
        printf("\nYou guessed right!");
        user_try_again = play_again(); // uses a header file method
        
        if(user_try_again == 'y' || user_try_again == 'Y') randNumber = random();
        else if(user_try_again == 'n' || user_try_again == 'N') break;

    }
    } while(true); // end of do while
    
    return 0;
} // end main