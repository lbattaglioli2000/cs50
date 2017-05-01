#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

void selection(int values[], int n)
{ 
    /* Find the smallest card. Swap it with the first card.
     * Find the second-smallest card. Swap it with the second card.
     * Find the third-smallest card. Swap it with the third card.
     * Repeat finding the next-smallest card, and swapping it into the correct position until the array is sorted.
     */
    for(int i = 0; i < n - 1; i++){
        int min = values[0];
        for(int j = i + 1; j < n; j++){
            if(values[j] < values[min]){
                min = values[j];
            }
        }
        if(min != values[i]){
            int temp = values[i];
            values[i] = values[i + 1];
            values[i + 1] = temp;
        }
    }
    return;
}