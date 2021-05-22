// Concatenate two strings

#include<stdio.h>
#include<string.h>

int main() {
    char str1[50], str2[20];
    printf("Enter first string\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter secound string\n");
    fgets(str2, sizeof(str2), stdin);

    strcat(str1, str2);
    puts(str1);
    return 0;
}