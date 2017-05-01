/**
 * helpers.c
 *
 * CS50 AP
 * Problem 3-4
 * 
 * Name: Luigi Battaglioli
 *
 * Helper functions for the sort race
 */

#include <cs50.h>
#include "helpers.h"
#include <string.h>

/**
 * Returns true if str is a valid flag (-a, -b, -r, or -s), false otherwise
 */
bool check_flag(char* str)
{ 
    /*
     * -a for almost sorted arrays. These arrays are already sorted except for two elements which have been randomly switched.
     * -b for backwards arrays. These arrays are sorted, but in reverse order: left-to-right, largest-to-smallest.
     * -r for random arrays. These arrays have no particular order.
     * -s for sorted arrays. These arrays are already properly sorted in order from left-to-right, smallest-to-largest.
     * 
     */
     
    if(strcmp(str, "-a") == 0){
        return true;
    }else if(strcmp(str, "-b") == 0){
        return true;
    }else if(strcmp(str, "-r") == 0){
        return true;
    }else if(strcmp(str, "-s") == 0){
        return true;
    }
    return false;
}

/**
 * Sorts array of n values using bubble sort.
 */
void bubble(int values[], int n)
{ 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(values[j] > values[j + 1]){
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }    
    }
    return;
}

/**
 * Sorts array of n values using selection sort.
 */
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

/**
 * Sorts array of n values using insertion sort.
 */
void insertion(int values[], int n)
{ 
    // TODO
    return;
}
