#include <stdio.h>

int main() { 
    char inputChar;
    int num1;
    int num2;
    float number;
    char string[100];
    
    printf("Enter a character: ");
    scanf(" %c", &inputChar);

    printf("\nEnter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    printf("Enter a string: ");
    scanf("%s", string);

    printf("\nYou entered character: %c\n", inputChar);
    printf("You entered integers: %d and %d\n", num1, num2);
    printf("You entered floating-point number: %.2f\n", number);
    printf("You entered string: %s\n", string);

    return 0;
}
