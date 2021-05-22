// Store information of n students using structures

#include<stdio.h>
#include<stdlib.h>

typedef struct Marks {
    int maths;
    int science;
    int english;
} marks;

typedef struct Student {
    char name[30];
    int roll;
    marks marks;
} student;

void Display(student *s, int n) {
    float *average;
    for(int i=0; i < n; i++) {
        *(average + i) =  ((s+i)->marks.maths + (s +i)->marks.science + (s + i)->marks.english )/3;
        printf("%d. %s, %.2f", (s+i)->roll, (s+i)->name, *(average + i));
    }
}

int main() {
    student *s;
    int n;
    printf("Enter the number of student\n");
    scanf("%d", &n);

    s = (student*)malloc(n*sizeof(student));

    for(int i=0; i < n; i++) {
        printf("%d Name: ", i+1);
        scanf("%s", (s+i)->name);
        scanf("%d", &(s+i)->roll);
        scanf("%d", &(s+i)->marks.maths);
        scanf("%d", &(s+i)->marks.science);
        scanf("%d", &(s+i)->marks.english);
    }

    Display(s, n);
    free(s);
    return 0;
}