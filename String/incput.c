#include<stdio.h>

int main() {
    char str[50];
    char *ptr;
    ptr = str;
    printf("Enter your name\n");
    scanf("%s", ptr);
    printf("Your name is : %s", str);
    return 0;
}