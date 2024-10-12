#include <stdio.h>

int main() { 
    char Main;
    int i1;
    int i2;
    float number;
    char string[100];


    printf("Enter character: ");
    scanf(" %c", &Main);


    printf("Enter two integers: ");
    scanf("%d %d", &i1, &i2);

 
    printf("Enter a floating-point number: ");
    scanf("%f", &number);

 
    printf("Enter a string: ");
    scanf("%s", string);

 
    printf("You entered character: %c\n", Main);
    printf("You entered integers: %d and %d\n", i1, i2);
    printf("You entered floating-point number: %.2f\n", number);
    printf("You entered string: %s\n", string);

    return 0;
}
