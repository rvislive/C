// Passing string to a Function

#include<stdio.h>

void Display(char name[]) {
    puts(name);
}

int main() {
    char name[50];
    fgets(name, sizeof(name), stdin);
    Display(name);
    return 0;
}