#include <stdio.h>
int main() {
    int Grade ;
    printf("score : ");
    scanf("%d", &Grade);

    switch (Grade / 5) {
    case 20 :
    case 18 :
    case 16 :
        printf("A");
        break;
    case 15:
        printf("B+");
        break;
    case 14 :
        printf("B");
        break;
    case 13 :
        printf("c+");
        break;
    case 12 :
        printf("c");
        break;
    case 11 :
        printf("d+");
        break;
    case 10 :
        printf("d");
        break;
    case 9 :
    case 8 :
    case 7 :
    case 6 :
    case 5 :
    case 4 :
    case 3 :
    case 2 :
    case 1 :
    case 0 :
        printf("f") ;
        break;
    default:
        break;
    }

    return 0 ;
}