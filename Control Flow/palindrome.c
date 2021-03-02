// Check whether a number is a palindrome or not
#include<stdio.h>

int Reverse(int num) {
    int rev = 0, rem;
    while(num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}

int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if(!(num == Reverse(num))) {
        printf("Not a Palindrome\n");
    } else {
        printf("Palindrome\n");
    }
    return 0;
}