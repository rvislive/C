// Read from a file

#include<stdio.h>
#include<stdlib.h>

int main() {
    char name[30];
    FILE *fptr;

    if((fptr = fopen("E:\\C\\File\\hello.txt", "r")) == NULL) {
        printf("Error:");
        exit(1);
    }

    fscanf(fptr, "%s", name);
    printf("Name is %s", name);
    fclose(fptr);
    return 0;
}