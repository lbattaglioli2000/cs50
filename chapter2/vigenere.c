#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int getK(int lettersCiphered, string k);
 
int main(int argc, string argv[]){
    if (argc != 2){
        printf("Invalid... Try again...\n");
        return 1;
    }
    
    string k = argv[1];
    
    for (int i = 0, length = strlen(k); i < length; i++){
        if (isalpha(k[i]) == false){
            printf("Invalid\n");
            return 1;
        }
    }
    
    string s = GetString();int lettersCiphered = 0;
    
    for (int i = 0, length = strlen(s); i < length; i++){
        char c = s[i];
        if (isupper(c)){
            char newC = (((c - 65) + getK(lettersCiphered,k)) % 26) + 65;
            printf("%c", newC);
            lettersCiphered++;
        }else if(islower(c)){
            char newC = (((c - 97) + getK(lettersCiphered,k)) % 26) + 97;
            printf("%c", newC);
            lettersCiphered++;
        }else{
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}

int getK(int lettersCiphered, string k){
    int length = strlen(k);
    return tolower(k[lettersCiphered % length]) - 97;
}