#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int play = 1;
    int score;
    int WinningNumber;
    int user;
    int low = 1;
    int high = 100;

    srand(time(NULL)); // เริ่มสุ่มตัวเลขตามเวลาปัจจุบัน

    while (true) {
        score = 100; // กำหนดค่าเริ่มต้นของ HP
        WinningNumber = rand() % 100 + 1; // สุ่มเลขในช่วง 1-100
        low = 1;
        high = 100;

        printf("Do you want to play the game? (1=play, -1=exit): ");
        scanf("%d", &play);
        
        if (play == -1) {
            printf("Thank you for playing! Goodbye.\n");
            break;
        } else if (play != 1) {
            printf("Invalid input. Exiting...\n");
            break;
        }

        while (true) {
            printf("Guess the winning number (%d-%d): ", low, high);
            scanf("%d", &user);

            if (user < WinningNumber) {
                score -= 10;
                if (low < user) {
                    low = user;
                }
                printf("Sorry, the winning number is HIGHER than %d! (Score = %d)\n", user, score);
            } else if (user > WinningNumber) {
                score -= 10;
                if (high > user) {
                    high = user;
                }
                printf("Sorry, the winning number is LOWER than %d! (Score = %d)\n", user, score);
            } else {
                printf("Correct!! The winning number is %d.\n", WinningNumber);
                printf("Score this game: %d\n", score);
                break;
            }

            if (score <= 0) {
                printf("Game over! Your score is 0.\n");
                break;
            }
        }

        printf("Do you want to play again? (1=play, -1=exit): ");
        scanf("%d", &play);
        if (play == -1) {
            printf("Thank you for playing! Goodbye.\n");
            break;
        }
    }

    return 0;
}
