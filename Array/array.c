// Passing arrays to functions

#include<stdio.h>

float SUM(float arr[], int num) {
    float sum = 0;
    for(int i = 0; i < num; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    float result, ageArray[] = {12.4, 12, 42.3, 14};
    result = SUM(ageArray, 4);
    printf("%.2f", result);
    return 0;
}