#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(void){
    // gets the users name and stores it in a variable
    char* userName = GetString();
    
    // checks to see if user input is not null
    if(userName != NULL){
        printf("%c", toupper(userName[0]));
        // loops through the users name
        for(int i = 0; i < strlen(userName); i++){
            char currentChar = userName[i];
            
            // checks if there is a space
            if(currentChar == 32){
                char initial = userName[i + 1];
                printf("%c", toupper(initial));
            }
        }
    }
    printf("\n");
}



