#include<stdio.h>

int TenTimes(int *ptr) {
    int result;
    result = *ptr * 10;
    return result;
}

int main() {
    int i = 4, *ptr;
    ptr = &i;
    printf("the value of variable i is: %d\n", *ptr);
    printf("%d", TenTimes(&i));
    return 0;
}