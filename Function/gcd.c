// Find G.C.D using recursion

#include<stdio.h>

int GCD(int n1, int n2) {
    if (n2 != 0)
        return GCD(n2, n1 % n2);
    else
        return n1;
}

int main() {
    int num1, num2;
    printf("Enter two number\n");
    // scanf("%d", &num1);
    // scanf("%d", &num2);
    printf("%d", GCD(12, 24));
    return 0;
}