// Passing struct by reference

#include<stdio.h>

typedef struct Student {
    char name[30];
} student;

void Display(student *s) {
    printf("Name is : %s", s->name);
}

int main() {
    student s1;
    printf("Enter name\n");
    scanf("%[^\n]%*c", s1.name);
    Display(&s1);
    return 0;
}