#include <stdio.h>
#include <string.h>

struct Student {
    int PRN;
    char name[50];
    float marks[3];
    int age;
};

int main() {
    struct Student students[3];
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter PRN: ");
        scanf("%d", &students[i].PRN);

        printf("Enter your name: ");
        scanf(" %49[^\n]", students[i].name);

        for (j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }

        printf("Enter your age: ");
        scanf("%d", &students[i].age);
    }

    printf("\n--- Student Details ---\n");

    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("PRN: %d\n", students[i].PRN);
        printf("Name: %s\n", students[i].name);

        for (j = 0; j < 3; j++) {
            printf("Marks in Subject %d: %.2f\n",
                   j + 1, students[i].marks[j]);
        }

        printf("Age: %d\n", students[i].age);
    }

    return 0;
}
