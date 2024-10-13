#include <stdio.h>

struct Student {
    char Name[20];
    char ID[5];
    float scores[5];
} typedef S;
char getGrade(float score) {
    if (score >= 80) return 'A';
    else if (score >= 75) return 'B+';
    else if (score >= 70) return 'B';
    else if (score >= 65) return 'C+';
    else if (score >= 60) return 'C';
    else if (score >= 55) return 'D+';
    else if (score >= 50) return 'D';
    else return 'F';
}

int main() {
    S students[3];
    float average;

    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]s", students[i].Name);

        printf("ID: ");
        scanf("%s", students[i].ID);

        for (int j = 0; j < 5; j++) {
            printf("Scores in Subject %d: ", j + 1);
            scanf("%f", &students[i].scores[j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].Name);
        printf("ID: %s\n", students[i].ID);
        printf("Scores: ");
        
        average = 0;
        for (int j = 0; j < 5; j++) {
            printf("%.1f ", students[i].scores[j]);
            average += students[i].scores[j];
        }

        printf("\nGrades: ");
        for (int j = 0; j < 5; j++) {
            printf("%c ", getGrade(students[i].scores[j]));
        }

        printf("\nAverage Score: %.1f\n", average / 5);
    }

    return 0;
}
