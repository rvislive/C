// Write to a text file

#include<stdio.h>
#include<stdlib.h>

int main() {
    char name[50];
    int num;
    FILE *fptr;

    fptr = fopen("E:\\C\\File\\hello.txt", "w");

    if(fptr == NULL) {
        printf("Error:");
        exit(1);
    }
    
    printf("Enter num\n");
    scanf("%[^\n]%*c", name);
    // scanf("%d", num);

    fprintf(fptr, "%s", name);
    fclose(fptr);
    return 0;
}