#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){
    printf("Days in month: ");
    
    int daysInMonth = GetInt();
    long long total = 0;
    
    while(!(daysInMonth >= 28 && daysInMonth <= 31)){
        printf("Uh-oh, there aren't any months that have %i days! Try again: ", daysInMonth);
        daysInMonth = GetInt();
    }
    
    printf("How many pennies do you get on the first day of the month? ");
    long long startPennies = GetInt();
    
    while(startPennies <= 0){
        printf("Please enter a positive number, greater than zero: ");
        startPennies = GetInt();
    }
    
    for (int i = 0; i < daysInMonth; i++) {
        total += startPennies;
        startPennies *= 2;
    }
    
    double dollars = (double) total/100;
    
    printf("$%.2f\n", dollars);
}