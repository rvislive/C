#include<stdio.h>

int main() {
    float tax = 0, income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if(income < 250000) {
        printf("you don\'t need to pay tax\n");
    } else if ((250000 <= income) && (income < 500000)) {
        printf("your tax will be %0.2f\n", (income - 250000)*5/100);
    } else if((500000 <= income) && (income < 1000000)) {
        printf("your tax will be %0.2f\n", (income - 250000)*20/100);
    } else {
        printf("your tax will be %0.2f\n", (income - 250000)*30/100);
    }
    return 0;
}