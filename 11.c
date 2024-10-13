#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder; 
        originalNum /= 10;
    }

    if (result == num) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }

    return 0;
}
