// Check Armstrong number.

#include<stdio.h>
// #include<math.h>

int POW(int num, int n) {
    int result = 1;
    while(n>0) {
        result *= num;
        n--;
    }
    return result;
}

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
        result += POW(temp, n);
        num /= 10;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if(num == isArmstrong(num)) {
        printf("%d is a Armstrong Number", num);
    } else {
        printf("%d is a not Armstrong Number", num);
    }
    return 0;
}