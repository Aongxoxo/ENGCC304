#include <stdio.h>   
#include <string.h>  
#include <ctype.h> 

int main() {
    char input[100];    
    int text = 1;       

    printf("Enter word: ");
    scanf("%s", input);  

    int len = strlen(input);  

   
    for (int i = 0; i < len; i++) {
        input[i] = tolower(input[i]);
    }

    for (int i = 0; i < len / 2; i++) {  
        if (input[i] != input[len - 1 - i]) {  
            text = 0;  
            break;      
        }
    }

    if (text) {
        printf("Pass.\n"); 
    } else {
        printf("Not Pass.\n"); 
    }

    return 0;
}
