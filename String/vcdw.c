// Find the number of vowels, consonants, digits and white spaces

#include<stdio.h>
#include<string.h>

void Count(char str[100]) {
    int vowels, consonants, digits, whiteSpaces;
    vowels = consonants = digits = whiteSpaces = 0;
    for(int i = 0; i < strlen(str); i++) {
        if(((str[i] == 'A') || (str[i] == 'a')) || ((str[i] == 'E') || (str[i] == 'e')) || ((str[i] == 'I') || (str[i] == 'i')) || ((str[i] == 'O') || (str[i] == 'o')) || ((str[i] == 'U') || (str[i] == 'u'))) {
            vowels += 1;
        } else if ((str[i] >= 48) && (str[i] <= 57 )) {
            digits += 1;
        } else if (str[i] == 32) {
            whiteSpaces += 1;
        } else {
            consonants ++;
        }
    }
    printf("Vowels : %d\n Consonants: %d\n Digits: %d\n White Spaces: %d\n Total: %d", vowels, consonants, digits, whiteSpaces, strlen(str));
} 

int main() {
    char str[100];
    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);
    Count(str);
    return 0;
}