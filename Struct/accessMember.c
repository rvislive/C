// Access members using Pointer

#include<stdio.h>

typedef struct Person {
    int age;
    float weight;
} person;

int main() {
    person *personPtr, person1;
    personPtr = &person1;
    
    printf("Enter the age of person\n");
    scanf("%d", &personPtr->age);
    
    printf("Enter the weight of person\n");
    scanf("%f", &personPtr->weight);

    // Displying
    printf("Age: %d\n", personPtr->age);
    printf("Weight: %.2f", personPtr->weight);
    return 0;
}