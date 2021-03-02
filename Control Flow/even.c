// Check whether a number is even or odd
#include<stdio.h>

void isEven(int num) {
    if(!(num % 2 == 0)) {
        printf("%d is odd number", num);
    } else {
        printf("%d is even number", num);
    }
}

int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    isEven(num);
    return 0;
}