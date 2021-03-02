// Find the largest number among three numbers
#include<stdio.h>

void isLargest(int num1, int num2, int num3) {
    int largest = (num1 > num2) ? (num1 > num3) ? num1 : num3 : (num2 > num3) ? num2 : num3;
    printf("%d is largest number", largest);
}

int main() {
    int num1, num2, num3;
    printf("Enter three number\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    isLargest(num1, num2, num3);
    return 0;
}