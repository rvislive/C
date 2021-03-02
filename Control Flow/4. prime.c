// Display prime numbers between two intervals.

#include<stdio.h>

void isPrime(int num) {
    for(int i = 2; i <= num/2 ; i++) {
    int flag = 0;
        if(num % i == 0) {
            flag = 1;
            break;
        }
    if(num == 1) {
        printf("1 is neiher a prime nor compsotove number\n");
    } else if(flag == 1) {
        printf("%d", num); 
    }
}
    }
    

int main() {
    int num1, num2;
    printf("Enter Interval\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    while(num1 < num2) {
        isPrime(num1);
        num1 ++; 
    }
    return 0;
}