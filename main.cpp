#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Author: Michael Guerrero
 // Guess_A_Number_Game
 //  Generates random integer from 0 ... 100
 //  Each attempt at the answer will provide a higher or lower prompt and ask the user if they want to try again 
 //  Compiles and executes at the command prompt

int main() { // main
    printf("\nWelcome to Guess_A_Number_Game!\nI will pick a random number from 0 to 99 and you will guess the number.\n");
    srand(time(NULL)); // random seed
    int randNumber = rand() % 101; // 0-100
    int var;
    char end;
    printf("\nEnter a number: ");
    scanf("%d", &var);
    // while loop
    while(var != randNumber) {
        printf("\nYou guessed wrong :(\n");
        if(var > randNumber) {
            printf("It is lower than %d\n", var);
        }
        else {
            printf("It is higher than %d\n", var);
        }
        printf("Try again? (y/n)\n");
        while(true) { // 2nd while loop
        scanf("%c", &end);
        if(end == 'n') {
            return 0;
        }
        else if (end == 'y') {
            printf("\nNever give up!");
            printf("\nEnter a number: ");
            scanf("%d", &var);
            break;
        }
        else {
            continue;
            }
        } // 2nd while loop ends
    } // end while loop
    printf("\nYou guessed right!");
    return 0;
} // end main