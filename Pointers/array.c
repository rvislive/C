// Example 2: Arrays and Pointers

#include<stdio.h>

int main() {
    int x[6] = {10, 20, 30, 40, 50, 60};
    int *ptr;

    ptr = &x[2];

    printf("%d\n", ptr[0]);
    // printf("%d", ((ptr+1) + 1));
    return 0;
}