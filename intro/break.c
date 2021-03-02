#include<stdio.h>

int main() {
    // Fidn the sum of max 5 numbers;
    float sum = 0.0, number;

    for(int i = 0; i<5; i++) {
        printf("Enter a number\n");
        scanf("%f", &number);

        if(number < 0.0)
            break;
        
        sum += number;
    }
    printf("The sum is %f", sum);
    return 0;
}