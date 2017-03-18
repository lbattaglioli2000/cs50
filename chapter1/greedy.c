#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){
    printf("How much change do you need to give back?\n$");
    float changeToGive = GetFloat();
    
    if(changeToGive < 0){
        printf("Please enter a non-negative number: \n$");
        changeToGive = GetFloat();
    }
    
    int changeRemaining = (int) roundf(changeToGive*100);;
    int numCoins = 0;
    
    while(changeRemaining >= 25){
        numCoins++;
        changeRemaining -= 25;
        if(changeRemaining < 25){
            break;
        }
    }
    
    while(changeRemaining >= 10){
        numCoins++;
        changeRemaining -= 10;
        if(changeRemaining < 10){
            break;
        }
    }
    
    while(changeRemaining >= 5){
        numCoins++;
        changeRemaining -= 5;
        if(changeRemaining < 5){
            break;
        }
    }
    
    while(changeRemaining >= 1){
        numCoins++;
        changeRemaining -= 1;
        if(changeRemaining == 0){
            break;
        }
    }
    
    printf("%i\n", numCoins);
}