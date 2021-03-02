// Find HCF of two numbers

#include<stdio.h>

void HCF (int dividend, int divisor) {
    int rem;
    while(!(dividend % divisor == 0)) {
        rem = dividend % divisor;
        printf("%d %d %d\n", dividend, divisor, rem);
        dividend = divisor;
        divisor = rem;
    }
    printf("HCF is %d", rem);
}

int main() {
    int dividend, divisor;
    printf("Enter the Dividend and Divisior\n");
    scanf("%d", &dividend);
    scanf("%d", &divisor);
    HCF(dividend, divisor);
    return 0;
}