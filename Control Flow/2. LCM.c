// Find LCM of two numbers

#include<stdio.h>

void LCM(int num1, int num2) {
    int result = 1;
    int max = (num1 > num2) ? num1 : num2;

    while(1) {
        if((max % num1 == 0) && (max % num2 == 0)) {
            printf("LCM of %d and %d is %d", num1, num2, max);
            break;
        }
        max ++ ;
    }
}

int main() {
    int num1, num2;
    printf("Enter two number\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    LCM(num1, num2);
    return 0;
}