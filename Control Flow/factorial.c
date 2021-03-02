// Find factorial of a number
#include<stdio.h>

long int factorial (int num) {
    long int factorialValue = 1;
    while(num > 0) {
        factorialValue *= num;
        num --;
    }
    return factorialValue;
}

int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("%ld", factorial(num));
    return 0;
}