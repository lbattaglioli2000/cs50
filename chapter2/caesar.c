#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[]){
    if(argc == 2){
        int key = atoi(argv[1]);
        string plainText = GetString();
        
        for(int i = 0; i < strlen(plainText); i++){
            char letter = plainText[i];
            char encryptedLetter = '\0';
            if(islower(letter)){
                encryptedLetter = (((letter - 97) + key) % 26) + 97;
                printf("%c", encryptedLetter);
            }else if(isupper(letter)){
                encryptedLetter = (((letter - 65) + key) % 26) + 65;
                printf("%c", encryptedLetter);
            }else{
                printf("%c", letter);
            }
        }
        printf("\n");
        return 0;
    }else{
        printf("Error. Too many or too few arguments passed in at the command line. Please re-run the program with the correct ammount of arguments (./caesar k)");
        return 1;
    }
}