#include<stdio.h>

int main() {
    int i, *ptr, **ptr_ptr;
    i = 45;

    ptr = &i;
    ptr_ptr = &ptr;
    
    printf("The value of i is : %d", **ptr_ptr);
    return 0;
}