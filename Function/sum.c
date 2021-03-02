// Find the sum of natural numbers using recursion

#include<stdio.h>

int SUM(int num) {
    int result = 0; 
    if (num > 0) {
        result += num + SUM(num - 1);
    } else {
        return result;
    }
}

int main() {
    int num;
    printf("Enter a number n to find sum\n");
    scanf("%d", &num);
    printf("%d", SUM(num));
    return 0;
}