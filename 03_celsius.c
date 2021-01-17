#include<stdio.h>
#define LOWER 300
#define UPPER 0
#define STEP 20

/* Program for converting celsious to Fahrenhit 
    celsious for 0, 20, 40, ..... */

int main() {
    float fahr;
    int celsious;

    printf("Program for converting celsious to Fahrenhit\n");
    celsious = LOWER;
    while(celsious >= UPPER) {
        fahr = (9*celsious)/5 + 32;
        printf("%d \t %0.2f\n", celsious, fahr);
        celsious = celsious - STEP;
    }
    return 0;
}