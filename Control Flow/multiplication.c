// Generate multiplication table

#include<stdio.h>

void multiplicationTable (int num) {
    for(int i = 1; i <= 10 ; i++) {
        printf("%d * %d = %d\n", num, i, num*i);
    }
}

int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    multiplicationTable(num);
    return 0;
}