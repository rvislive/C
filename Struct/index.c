// typedef strucuture

#include<stdio.h>

typedef struct Distance {
    int km;
    float m;
} distance;

int main() {
    distance d1, d2, sum;
    d1.km = 10;
    d2.km = 12;
    d1.m = 378;
    d2.m = 782;

    sum.km = d1.km + d2.km;
    sum.m = d1.m + d2.m;

    if(sum.m >= 1000) {
        sum.km ++;
        sum.m = sum.m - 1000;
    }

    printf("Distanse is : %d %f", sum.km, sum.m);
    return 0;
}