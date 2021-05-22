// Return struct from a function

#include<stdio.h>

typedef struct Student {
    char name[30];
} student;

student getName() {
    student s;
    scanf("%[^\n]%*c", s.name);
    return s;
}

int main() {
    student s1;
    s1 = getName();
    printf("name of the student is: %s", s1.name);
    return 0;
}