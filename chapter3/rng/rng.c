#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

#define _XOPEN_SOURCE
#define LIMIT 65536

int main(int argc, string argv[]){
    if(argc == 4){
        int seed = atoi(argv[3]);
        srand(seed);
        int randomNumber;
        int count = 0;
        int numbersToDisplay = atoi(argv[1]);
        int max = atoi(argv[2]);
        if(max >= LIMIT){
            printf("You exceded the limit.");
            return 1;
        }
        
        while(count <= numbersToDisplay){
            randomNumber = rand();
            printf("%i\n", randomNumber);
            if(randomNumber >= max){
                break;
            }
        }
    }else if(argc == 3){
        srand(time(NULL));
        int randomNumber;
        int count = 0;
        int numbersToDisplay = atoi(argv[1]);
        int max = atoi(argv[2]);
        if(max >= LIMIT){
            printf("You exceded the limit.\n");
            return 1;
        }
        
        while(count <= numbersToDisplay){
            randomNumber = rand();
            printf("%i\n", randomNumber);
            if(randomNumber >= max){
                break;
            }
        }
        
    }else{
        printf("Usage: ./rng n max [s]\n");
        return 1;
    }
    
}