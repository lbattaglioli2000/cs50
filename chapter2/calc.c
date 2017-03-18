#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(int argc, string argv[]){
    if(argc == 4){
        float numOne = atof(argv[1]);
        float numTwo = atof(argv[3]);
        char * opperation = argv[2];
        if(strcmp(argv[2], "+") == 0){
            float sum = numOne + numTwo;
            printf("%f\n", sum);
        }else if(strcmp(opperation, "-") == 0){
            float difference = numOne - numTwo;
            printf("%f\n", difference);
        }else if(strcmp(opperation, "/") == 0){
            float quotient = numOne / numTwo;
            printf("%f\n", quotient);
        }else if(strcmp(opperation, "*") == 0){
            float product = numOne * numTwo;
            printf("%f\n", product);
        }else if(strcmp(opperation, "%") == 0){
            float remaining = fmod(numOne, numTwo);
            printf("%f\n", remaining);
        }else if(strcmp(opperation, "x") == 0){
            float product = numOne * numTwo;
            printf("%f\n", product);
        }else{
            printf("Error.");
            return 1;
        }
    }else{
        printf("Not enough, or too many, arguments were provided.\n");
        return 1;
    }
}