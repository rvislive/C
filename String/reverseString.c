// Reverse a string using recursion

#include<stdio.h>
#include<string.h>

void reverseString(char str[50]) {
    for(int i = strlen(str) ; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[50];
    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);
    reverseString(str);
    return 0;
}