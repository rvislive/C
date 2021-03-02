// Display factors of a number

#include<stdio.h>

void Factor(int num) {
    for(int i = 2; i <= num/2 ; i++) {
        if(num % i == 0) {
            printf("%d, ", i);
        }
    }
}   

int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    Factor(num);
    return 0;
}