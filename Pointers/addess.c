// a program to print addresses of array elements.

#include<stdio.h>

int main() {
    int x[4];
    x[0] = 1;
    printf("&x[%d] = %d, value= %d\n", 2, &x[2], *(x+1));
    printf("Address of x+1 is: %d", &x[0]+2);
    return 0;
}