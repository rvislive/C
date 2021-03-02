#include<stdio.h>

int main() {
    float sum = 0.0, number;
    int i = 0;

    while(i<5) {
        printf("Enter a number\n");
        scanf("%f", &number);

        if(number < 0.0) 
            goto now;
        i++;
    }

    now:
        printf("%f", number);
    return 0;
}