#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "game.h" // header file

int random() { // random
    srand(time(NULL)); // random seed
    int randNumber = rand() % 101; // 0-100
    return randNumber;
} // end random

int user_input_int() { // user_input_int
    int input;
    scanf("%d", &input); // input
    return input;
} // end user_input_int

int user_input_char() { // user_input_char
    char input;
    scanf(" %c", &input); // when scanning a character have a white space first
    return input;
} // end user_input_char