// Dynamic memory allocation of structs

#include<stdio.h>
#include<stdlib.h>

typedef struct Person {
    char name[30];
    int age;
    float weight;
} person;

int main() {
    person *personPtr; 

    int n;
    printf("Enter the number of person\n");
    scanf("%d", &n);
    //ptr = (int*)malloc(n*sizeof(int));
    personPtr = (person*)malloc(n*sizeof(person));

    for(int i=0; i<n; i++) {   
        printf("%d Person\n", i+1);
        scanf("%s", (personPtr + i)->name);    
        scanf("%d", &(personPtr + i)->age);
        scanf("%f", &(personPtr + i)->weight);
    } 

    // displaying
    for(int i=0; i<n; i++) {
        printf("%d. %s, %d, %.2f\n", i+1, (personPtr + i)->name, (personPtr + i)->age, (personPtr + i)->weight);
    }
    free(personPtr);
    return 0;
}