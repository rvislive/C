#include<stdio.h>

int main() {
    int var[] = {5, 6};
    printf("%d\n", &var[0]);  
    printf("%d", &var[1]);  
    return 0;
}