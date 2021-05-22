#include<stdio.h>

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr;
    ptr = arr;
    if(*(ptr+3) == 4) {
        printf("true");
    }
    return 0;
}