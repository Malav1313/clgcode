#include <stdio.h>

// Define a structure for a university record
struct UniversityRecord {
    char instituteName[100];
    int enno;
    char stuName[100];
};

int main() {

    struct UniversityRecord universities[5];

    for (int i = 0; i < 3; i++) {
        printf("Enter Institute Name: ");
        scanf("%s", universities[i].instituteName);

        printf("Enter Enrollment Number: ");
        scanf("%d", &universities[i].enno);
        

        while (getchar() != '\n');

        printf("Enter Student Name: ");
        scanf("%s", universities[i].stuName);
    }

    printf("\nStudent Record:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1);
        printf("Institute Name: %s\n", universities[i].instituteName);
        printf("Enrollment Number: %d\n", universities[i].enno);
        printf("Student Name: %s\n", universities[i].stuName);
        printf("\n");
    }

    return 0;
}
