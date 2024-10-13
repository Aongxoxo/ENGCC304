#include <stdio.h>

int main() { 
    char inputChar;
    int num1;
    int num2;
    float number;
    char string[100];
    
    printf("Enter a character:\n");
    scanf(" %c", &inputChar);

    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);
    
    printf("Enter a floating-point number:\n");
    scanf("%f", &number);

    printf("Enter a string:\n");
    scanf("%s", string);

    printf("You entered character: %c\n", inputChar);
    printf("You entered integers: %d and %d\n", num1, num2);
    printf("You entered floating-point number: %.2f\n", number);
    printf("You entered string: %s\n", string);

    return 0;
}
