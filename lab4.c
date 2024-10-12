#include <stdio.h>

int main() {
    char id[11];
    int hours;
    float rate;

    scanf("%s %d %f", id, &hours, &rate);  

    printf("Employees ID = %s\n", id);
    printf("Salary = U$ %.2f\n", hours * rate); 

    return 0;
}
