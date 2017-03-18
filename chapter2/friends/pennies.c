// includes
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// defined constants
#define MAX_DAYS 31
#define MIN_DAYS 28

int main(int argc, string argv[])
{
    if(argc == 3){
        // get a number of days in [28, 31]
        int days = atoi(argv[1]);
        if(days < MIN_DAYS || days > MAX_DAYS){
            printf("Hmm. not right... 1");
            return 1;
        }
        
        // get a number of pennies in [0, inf)
        int pennies = atoi(argv[2]);
        if(pennies <= 0){
            printf("Hmm. not right... 2");
            return 1;
        }
        
        // relatively few pennies required to get out of bounds of int
        long long total = pennies;
        
        // add double the amount of pennies of the previous day each day
        for(int i = 1; i < days; i++)
        {
            total += pennies * pow(2,i);
        }
            
        // output the total as dollars and cents only
        printf("$%.2f\n", ((double) total) / 100);
    }else{
        printf("Hmm. not right... 3");
        return 1;
    }
}
