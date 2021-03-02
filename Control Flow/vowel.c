// Check whether a character is a vowel or consonant

#include<stdio.h>

void isVowel(char c) {
    if(!((c == 'a' || c == 'A') || (c == 'e' || c == 'E') || (c == 'i' || c == 'I') || (c == 'o' || c == 'O') || (c == 'U' || c == 'u'))) {
        printf("%c is a consonant", c);
    } else {
        printf("%c is a vowel", c);
    }
}

int main() {
    char c;
    printf("Enter any character\n");
    scanf("%c", &c);
    isVowel(c);
    return 0;
}