// Check Whether a Number is Positive or Negative or Zero.
#include<stdio.h>

void isPositive(int num) {
    if(num > 0) {
        printf("%d is positive", num);
    } else if(num == 0) {
        printf("%d is Zero", num);
    } else {
        printf("%d is negative", num);
    }
}

int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    isPositive(num);
    return 0;
}