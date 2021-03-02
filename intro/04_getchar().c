#include<stdio.h>

int main() {
    char c;
    c = getchar();
    while(c != EOF) {
        c = getchar();
    }
    printf(EOF);
    return 0;
}