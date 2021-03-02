// Display Armstrong numbers between two intervals

#include<stdio.h>
#include<math.h>

int DIGITS(int num) {
    int count = 1;
    for(int i = 10; i <= num; i*=10) {
        if(num % i == 0) {
            break;
        }
        count ++;
    }
    return count;
}

int isArmstrong(int num) {
    int n = DIGITS(num), result = 0, temp;
    for(int i = 0; i < n; i++) {
        temp = num % 10;
        result += pow(temp, n);
        num /= 10;
    }
    return result;
}

int main() {
    int num1, num2;
    printf("Enter a number\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    while(num1 < num2) {
        if(num1 == isArmstrong(num1)) {
            printf("%d, ", num1);
        }
        num1 ++;
    }
    
    return 0;
}