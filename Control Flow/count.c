// Count number of digits of an integer

#include<stdio.h>

void Count(int num) {
    int count = 0;
    for(int i = 10; i <= num; i *= 10) {
        if(num % i == 0)
            break;
        ++count;
    }
    printf("%d", count+1);
}

int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    Count(num);
    return 0;
}