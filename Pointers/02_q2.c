#include<stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg) {
    *sum = a +b;
    *avg = (float) *sum/2;
}

int main() {
    int firstNumber = 24, secoundNumber = 73, sum;
    float avg;
    sumAndAvg(firstNumber, secoundNumber, &sum, &avg);
    printf("The sum is: %d", sum);
    printf("The average is: %f", avg);
    return 0;
}