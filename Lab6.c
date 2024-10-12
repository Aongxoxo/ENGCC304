#include <stdio.h> 

int main () {
    int num, r, c;
    printf("Please enter your number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        for (r = 0; r < num; r++) {
            for (c = 0; c < num; c++) {
                if (c == num - r - 1) {
                    printf("1");
                } else {
                    printf("0");
                }
            }
            printf("\n");
        }
    } else {
        for (r = 0; r < num; r++) {
            for (c = 0; c < num; c++) {
                if (c == r) {
                    printf("1");
                } else {
                    printf("0");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
