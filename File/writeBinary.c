// Write to a binary file using fwrite()

#include<stdio.h>
#include<stdlib.h>

typedef struct Number {
    int n1;
} number;

int main() {
    number *numPtr;
    FILE *fptr;

    fptr = fopen("E:\\C\\File\\hello.bin", "wb");

    if(fptr == NULL) {
        printf("Error: Opening File\n");
        exit(1);
    }

    int num;
    printf("Enter the no. of number\n");
    scanf("%d", &num);

    numPtr = (number*)malloc(num*sizeof(number));

    for(int i=0; i < num; i++) {
        (numPtr + i)->n1 = i*5;
        fwrite(numPtr, sizeof(number), 1, fptr);
    }
    fclose(fptr);
    free(numPtr);
    return 0;
}