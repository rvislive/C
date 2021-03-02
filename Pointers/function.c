// Pass Addresses to Functions

#include<stdio.h>

void swep(int *num1, int *num2) {
    int temp;
    temp = *num2;
    *num2 = *num1;
    *num1 = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    swep(num1, num2);
    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);
    return 0;
}