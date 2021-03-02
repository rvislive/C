// Example 1: Pointers and Arrays

#include<stdio.h>

int main() {
    int i, x[3], sum = 0;
    for(i = 0; i < 3; i++) {
        scanf("%d", &x[0]+i);
        sum += *(x+i);
    }
    printf("%d", sum);
    return 0;
}