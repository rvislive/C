// Calculate the average of array elements

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr, num, sum = 0; 
    printf("Enter the no of elements in the array\n");
    scanf("%d", &num);
    ptr = (int*)malloc(num * sizeof(int));
    for(int i = 0; i < num; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr+i);
    }
    printf("The sum is : %d", sum);
    free(ptr);
    return 0;
}