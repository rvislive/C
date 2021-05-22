// Find the frequency of a character in a string.

#include<stdio.h>
#include<string.h>

int main() {
    char str[100], ch;
    int len = 0;
    printf("Enter a String\n");
    fgets(str, sizeof(str), stdin);
    printf("Enter a charcter to find the frequency\n");
    scanf("%c", &ch);
    for(int i = 0; i < strlen(str) ; i++) {
        if(ch == str[i]) {
            len ++;
        }
    }
    printf("result: %d", len);
    return 0;
}