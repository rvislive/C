// Display Fibonacci series

#include<stdio.h>

void Fibonacci(int num) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    printf("%d, %d, ", t1, t2);
    nextTerm = t1 + t2;

    for(int i = 0; i < num; i++ ) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}

int main() {
    int num;
    printf("Enter the number of terms in the series\n");
    scanf("%d", &num);
    Fibonacci(num);
    return 0;
}