#include <stdio.h>

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} typedef S;

const char* getGrade(float score) {
    if (score >= 80) {
        return "A";
    } else if (score >= 75 && score < 80) {
        return "B+";
    } else if (score >= 70 && score < 75) {
        return "B";
    } else if (score >= 65 && score < 70) {
        return "C+";
    } else if (score >= 60 && score < 65) {
        return "C";
    } else if (score >= 55 && score < 60) {
        return "D+";
    } else if (score >= 50 && score < 55) {
        return "D";
    } else {
        return "F";
    }
}

int main() {
    S students[3];
    float average;

    printf("Enter the details of 3 students:\n");

    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]s", students[i].Name);

        printf("ID: ");
        scanf("%s", students[i].ID);

        printf("Scores in Subject 1: ");
        scanf("%f", &students[i].ScoreSub1);

        printf("Scores in Subject 2: ");
        scanf("%f", &students[i].ScoreSub2);

        printf("Scores in Subject 3: ");
        scanf("%f", &students[i].ScoreSub3);

        printf("Scores in Subject 4: ");
        scanf("%f", &students[i].ScoreSub4);

        printf("Scores in Subject 5: ");
        scanf("%f", &students[i].ScoreSub5);
    }

    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].Name);
        printf("ID: %s\n", students[i].ID);

        printf("Scores: %.0f %.0f %.0f %.0f %.0f\n", 
               students[i].ScoreSub1, students[i].ScoreSub2, 
               students[i].ScoreSub3, students[i].ScoreSub4, 
               students[i].ScoreSub5);

        printf("Grades: %s %s %s %s %s\n", 
               getGrade(students[i].ScoreSub1), getGrade(students[i].ScoreSub2), 
               getGrade(students[i].ScoreSub3), getGrade(students[i].ScoreSub4), 
               getGrade(students[i].ScoreSub5));
        
        average = (students[i].ScoreSub1 + students[i].ScoreSub2 + students[i].ScoreSub3 + 
                   students[i].ScoreSub4 + students[i].ScoreSub5) / 5;
        printf("Average Scores: %.1f\n", average);
    }

    return 0;
}
