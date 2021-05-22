#include<stdio.h>

int main() {
    int arr[10], n;
    int *ptr;
    ptr = arr;
    printf("Enter the number\n");
    scanf("%d", &n);

    for(int i = 0; i < 10; i++) {
        scanf("%d", ptr+i)
    }

    
    return 0;
}