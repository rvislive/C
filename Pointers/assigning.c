// Assigning addresses to Pointers

#include<stdio.h>

int main() {
    int *pc, c;
    c = 5;
    pc = &c;
    printf("%d %d %d", pc, *pc, &c);
    return 0;
}