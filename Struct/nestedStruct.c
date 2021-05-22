// Nested structure

#include<stdio.h>

typedef struct Address {
    char street[20];
    int houseNumber;
    char *city;
    char *state;
    char *country
} address;

typedef struct Person {
    char name[50];
    long int phoneNumber;
    int age;
    address address
} person;

int main() {
    person p1;

    printf("Enter the name of the person\n");
    fgets(p1.name, sizeof(p1.name), stdin);

    printf("Enter the phone number\n");
    scanf("%ld", &p1.phoneNumber);

    printf("Enter the address street\n");
    fgets(p1.address.street, sizeof(p1.address.street), stdin);
    
    printf("Enter the address city\n");
    fgets(p1.address.city, sizeof(p1.address.city), stdin);
    
    printf("Enter the address state\n");
    fgets(p1.address.state, sizeof(p1.address.state), stdin);
    
    printf("Enter the address country\n");
    fgets(p1.address.country, sizeof(p1.address.country), stdin);

    printf("Person is : \n");
    fputs(p1.name, stdout);
    fputs(p1.address.street, stdout);
    return 0;
}