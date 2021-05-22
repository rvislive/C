#include<stdio.h>

typedef struct complex {
    int real;
    int img;
} complex;

void Display(complex *arr) {
    for(int i = 0; i < 5 ; i++) {
        printf("(%d + i%d), ", (arr + i)->real, (arr + i)->img);
    }
}

int main() {
    complex arr[5], *ptr;

    ptr = arr;

     for(int i = 0; i < 5 ; i++) {
        printf("Enter the %d complex number\n", i+1);
        scanf("%d", &(ptr + i)->real);
        scanf("%d", &(ptr + i)->img);
    }

    Display(ptr);
    return 0;
}