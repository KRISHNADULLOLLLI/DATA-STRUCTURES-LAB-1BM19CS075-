#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    char firstName[50];
    int roll;
    int age;
    int id;
    float marks;
} s[100];

int main() {
    int i, n;
    printf("Enter no of students:\n");
    scanf("%d",&n);
    printf("Enter information of students:\n");

    for (i = 0; i < n; i++) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);

        printf("Enter student id: ");
        scanf("%d", &s[i].id);

        printf("Enter student age: ");
        scanf("%d", &s[i].age);
        if (s[i].age <= 20){
            printf("Invalid age,should be greater than 20");
            i -= 1;
            continue;
        }


        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        if (s[i].marks < 0 || s[i].marks > 100){
            printf("Invalid marks,should be between 0 and 100");
            i -= 1;
            continue;
        }

    }
    printf("Displaying Information of all applied students:\n\n");


    for (i = 0; i < n; i++) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f\n", s[i].marks);
        printf("Student id: %d\n", s[i].id);
        printf("Student age: %d\n", s[i].age);
        printf("\n");
    }
    printf("checking for disqualification:\n");
    for (i = 0; i < n; i++){


        if (s[i].marks < 65){
            printf("the student with id %d is not qualified for exam bacause marks is less than 65\n",s[i].id);
        }
    }
    printf("Displaying Information of all qualified students:\n\n");


    for (i = 0; i < n; i++) {
            if (s[i].marks < 65){
                continue;
            }
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f\n", s[i].marks);
        printf("Student id: %d\n", s[i].id);
        printf("Student age: %d\n", s[i].age);
        printf("\n");
    }


    return 0;
}
