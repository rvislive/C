// Reverse a sentence using recursion

#include<stdio.h>

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if(c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}

int main() {
    reverseSentence();
    return 0;
}