// Passing structs to functions

#include<stdio.h>

typedef struct Student {
    char name[50];
    int roll;
} student;

void Display(student s) {
    printf("%s", s.name);
    printf("%d", s.roll);
}

int main() {
    student s1;
    printf("Enter the name of the student\n");
    scanf("%[^\n]%*c", s1.name);
    printf("Enter the roll number of the student\n");
    scanf("%d", &s1.roll);

    Display(s1);
    return 0;
}