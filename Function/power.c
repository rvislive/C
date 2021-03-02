// Calculate the power of a number using recursion

#include<stdio.h>

int POW(int num, int n) {
    if(n != 1) {
        return (num * POW(num, n-1))
    } else {
        return 1;
    }
}

int main() {
    int num, n;
    printf("Enter a number and power\n");
    // scanf("%d", &num);
    // scanf("%d", &n);
    printf("%d", POW(5, 3));
    return 0;
}