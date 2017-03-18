#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[]){
    if(argc != 2){
        printf("No.")
        return 1;
    }else{
        float celsius = atof(argv[1]);
        
        // convert to fahrenheit; no float errors b/c celsius is a float
        float fahrenheit = (celsius * 9) / 5 + 32;
        printf("F: %.1f\n", fahrenheit);
        return 0;
    }
}
