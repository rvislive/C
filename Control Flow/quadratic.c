// Find all roots of a quadratic equation
#include<stdio.h>
#include<math.h>

void allRoots(int a, int b, int c) {
    double D;
    D = ((b*b) - (4*a*c));
    if(D<0) {
        printf("Roots are not real\n");
    } else if (D == 0) {
        printf("Roots are real and equal %f", (-b/(4*a)));
    } else {
        printf("Roots are real and not equal %f and %f", (-b+sqrt(D)/(4*a)), (-b-sqrt(D)/(4*a)));
    }
} 

int main() {
    float a, b, c;
    printf("Enter the cofficient of Quadratic Equation\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    allRoots(a, b, c);
    return 0;
}