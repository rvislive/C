//Checker whether a character is an alphabet or not

#include<stdio.h>

void isChar(char c) {
    if((c >= 65 && c <= 91) || (c >= 97 && c <= 123)) {
        printf("%c is a alphabet\n", c);
    } else {
        printf("%c is NOT a alphabet\n", c);
    }
}

int main() {
    char c;
    printf("Enter a charcter\n");
    scanf("%c", &c);
    isChar(c);
    return 0;
}