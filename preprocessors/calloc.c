#include<stdio.h>
#include<stdlib.h>
int main() {
    int *num;
    num = (int *)calloc(10, sizeof(int));

    for(int i =0; i < 5; i++) {
        scanf("%d", (num+i));
    }

    for(int i =0; i < 10; i++) {
        printf("%d\n", *(num+i));
    }
    return 0;
}
