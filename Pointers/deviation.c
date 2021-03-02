// Calculate standard deviation

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    float *ptr, sum = 0, sumOfSqure = 0, sd;
    int num;
    printf("Enter the number of population\n");
    scanf("%d", &num);

    ptr = (float*)malloc(num*sizeof(float));
    for(int i = 0; i < num; i++) {
        scanf("%f", ptr+i);
        sum += *(ptr + i);
    }
    float average;
    average = sum/num;
    for(int i = 0; i < num; i++) {
        sumOfSqure += pow((*(ptr + i) - average), 2);
    }
    sd = sqrt(sumOfSqure/num);
    printf("SD is %.2f", sd);
    free(ptr);
    return 0;
}