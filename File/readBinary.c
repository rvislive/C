// Read binary files

#include<stdio.h>
#include<stdlib.h>

typedef struct Number {
    int n1;
} number;

int main() {
    number *numPtr;
    FILE *fPtr;

    fPtr = fopen("E:\\C\\File\\hello.bin", "rb");

    if(fPtr == NULL) {
        printf("Error: ");
        exit(1);
    }

    for(int i = 0; i<7; i++) {
        fread((numPtr + i), sizeof(number), 1, fPtr);
        printf("Number: %d", (numPtr + i)->n1);
    }
    fclose(fPtr);
    free(numPtr);
    return 0;
}