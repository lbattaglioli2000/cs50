#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#define _XOPEN_SOURCE
#define LIMIT 65536
int main(int argc, char* argv[]){
    if(argc == 4){
        int seed = atoi(argv[3]);
        srand(seed);
        int randomNumber;
        int count = 0;
        int numbersToDisplay = atoi(argv[1]);
        int numbersArray[numbersToDisplay];
        int max = atoi(argv[2]);
        if(max > LIMIT){
            printf("You exceded the limit.");
            return 1;
        }
        while(count < numbersToDisplay){
            randomNumber = rand();
            if(randomNumber <= max && randomNumber >= 0){
                numbersArray[count] = randomNumber;
                count++;
            }
        }
        for(int i = 0; i < numbersToDisplay; i++){
            printf("%i\n", numbersArray[i]);
        }
    }else if(argc == 3){
        int seed = time(NULL);
        srand(seed);
        int randomNumber;
        int count = 0;
        int numbersToDisplay = atoi(argv[1]);
        int numbersArray[numbersToDisplay];
        int max = atoi(argv[2]);
        if(max >= LIMIT){
            printf("You exceded the limit.\n");
            return 1;
        }
        while(count < numbersToDisplay){
            randomNumber = rand();
            if(randomNumber <= max && randomNumber >= 0){
                numbersArray[count] = randomNumber;
                count++;
            }
        }
        for(int i = 0; i < numbersToDisplay; i++){
            printf("%i\n", numbersArray[i]);
        }
    }else{
        printf("Usage: ./rng n max [s]\n");
        return 1;
    }
}