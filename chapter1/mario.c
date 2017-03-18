#include <cs50.h>
#include <stdio.h>

int main(void){
    printf("Height: ");
    int height = GetInt();
    while(!(height >= 0 && height <= 23)){
        printf("Retry: ");
        height = GetInt();
    }
    
    for(int i = 0; i < height; i++){
        for(int j = 0; j < height-i-1; j++){
            printf("%s", " ");
        }
        
		for(int p = 0; p < i+2; p++){
			printf("#");
		}
		printf("\n");
	}
}
