// Remove all characters in a string except alphabets

#include<stdio.h>
#include<string.h>

void removeAllCharacter(char str[50]) {
    for(int i = 0 ; i < strlen(str); i++) {
        if(((str[i] >= 65) && (str[i] <= 90) || (str[i] >= 97) && (str[i] <= 122))) {
            printf("%c", str[i]);
        }
    }
}

int main() {
    char str[50];
    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);
    removeAllCharacter(str);
    return 0;
}

