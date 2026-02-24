/*Write a C program that defines a structure to store a student's details (name, roll number, and marks). Use an array of structures to store details of 3 students and print them.*/
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[3];
    int i;
    for ( i = 0; i < 3; i++) {
        printf("Enter roll no, name, and marks of student %d:\n", i + 1);
        scanf("%d", &students[i].rollNo);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].marks);
    }

    // Display all
    for ( i = 0; i < 3; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;
}

