// Calculate the power of a number

#include<stdio.h>

long int Power(int num, int pow) {
    long int result = 1;
    while(pow > 0) {
        result *= num;
        pow --;
    }
    return result;
}

int main() {
    int num, pow;
    printf("Enter a numer and their power\n");
    scanf("%d", &num);
    scanf("%d", &pow);
    printf("%ld", Power(num, pow));
    return 0;
}