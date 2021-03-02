#include<stdio.h>

int main() {
    char operator;
    float n1, n2;

    printf("Enter the operator\n");
    scanf("%c", &operator);

    printf("Enter two oprends\n");
    scanf("%f", &n1);
    scanf("%f", &n2);

    switch(operator) {
        case '+':
            printf("The sum is %f", (n1+n2));
            break;
        case '-':
            printf("The differance is %f", (n1-n2));
            break;
        case '*':
            printf("The multiply is %f", (n1*n2));
            break;
        case '/':
            printf("The divide is %f", (n1/n2));
            break;
        default: 
            printf("Error !!");
    }
    return 0;
}