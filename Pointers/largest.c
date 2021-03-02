// Find the largest element of an array

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr, largest = -1, num;
    printf("Enter the number of elemnts\n");
    scanf("%d", &num);
    ptr = (int*)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++) {
        scanf("%d", ptr + i);

        if(*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }
    free(ptr);
    printf("Largest is : %d", largest);
    return 0;
}