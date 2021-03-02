// Calculate the factorial of a number using recursion

#include<stdio.h>

long int Fac(int num) {
    long int result = 1;
    if(num > 0) {
        result *= num*Fac(num - 1);
    } else {
        return result;
    }
}

int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("%ld", Fac(num));
    return 0;
}