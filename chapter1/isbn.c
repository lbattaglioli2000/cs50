#include <cs50.h>
#include <stdio.h>

// ISBN 1566199093 should sum to 256.

int main(void){
    printf("Enter an ISBN:\n");
    long long isbn = GetLongLong();
    long long isbnCopy = isbn;
    int sum = 0;
    int place = isbn % 10;
    isbn /= 10;
    
    for(int i = 9; i > 0; i--){
        place = isbn % 10;
        sum += i * place;
        isbn /= 10;
    }
    
    if(sum % 11 == isbnCopy % 10){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}