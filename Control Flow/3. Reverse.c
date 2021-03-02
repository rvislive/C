// Reverse a number 

#include<stdio.h>

void Reverse(int num) {
    int rev = 0, rem;
    while(num != 0) {
        rem = num % 10;
        rev = rev*10 + rem;
        num /= 10;
    }
    printf("%d", rev);
}

int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    Reverse(num);
    return 0;
}