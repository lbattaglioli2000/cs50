#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // collect a string from the user, then print their name
    if (argc != 2){
        printf("Usage: ./hello <name>\n");
        return 1;
    }else{
        string name = argv[1];
        printf("hello, %s\n", name);
        return 0;
    }
    
}
