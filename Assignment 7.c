#include <stdio.h>
#include <string.h>
struct Student {
{   int PRN;
    char Name[50];
   float marks[3];
    float total, percentag;
}
int main() {
    struct Student students[3];
    int i, j;

    printf("ENTER DETAILS FOR 3 STUDENTS \n\n");
for (i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);

        students[i].total = 0;
}
        for (j = 0; j < 3; j++) {
            printf("Enter marks for Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }

        students[i].percentage = students[i].total / 3.0;
        printf("\n");
    ]
    printf("%-8s %-20s %-10s %-10s %-10s %-10s %-10s\n", 
           "PRN", "Name", "Sub 1", "Sub 2", "Sub 3", "Total", "Percentage");
  
    for (i = 0; i < 3; i++) 
        printf("%-8d %-20s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f%%\n",
               students[i].PRN,
               students[i].Name,
               students[i].marks[0],
               students[i].marks[1],
               students[i].marks[2],
               students[i].total,
               students[i].percentage);
    }
    return 0;
}
