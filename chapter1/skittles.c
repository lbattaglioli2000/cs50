#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    // generate a seed based on the time
    srand(time(NULL));
    // generates a random number of skittles
    int skittles = rand() % 1024;
    // get the users guess
    printf("How many skittles? ");
    int guess = GetInt();
    while(guess != skittles){
        if(guess > skittles){
            printf("Nope! Guess lower: ");
            guess = GetInt();
        }
        if(guess < skittles){
            printf("Nope! Guess higher: ");
            guess = GetInt();
        }
        if(guess == skittles){
            break;
        }
    }
    printf("You got it! There were %i skittles!\n", skittles);
}