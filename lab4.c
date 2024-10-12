#include <stdio.h>

int main() {
    char id[11];
    int hours;
    float rate;

    printf("Input the Employees ID (Max. 10 chars): ");
    scanf("%s", id);

    printf("Input the working hrs: ");
    scanf("%d", &hours);

    printf("Salary amount/hr: ");
    scanf("%f", &rate);

    printf("Employees ID = %s\n", id);
    printf("Salary = U$ %.2f\n", hours * rate); 

    return 0;
}
