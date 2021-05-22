#include<stdio.h>

int main() {
    int a, b, c, *ptr_a, *ptr_b;
    ptr_a = &a;
    ptr_b = &b;

    int result = ptr_a - ptr_b;
    printf("The address of a is : %i\n", result);
    return 0;
}