#include<stdio.h>

int main() {
    int i;
    int *ptr;
    ptr = &i;
    printf("the address of i is: %u", ptr);
    printf("the address of i is: %d", ptr);
    return 0;
}