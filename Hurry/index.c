#include<stdio.h>

int main() {
    int marks1, marks2, marks3;
    printf("Enter the marks of all subjects\n");
    scanf("%d", &marks1);
    scanf("%d", &marks2);
    scanf("%d", &marks3);

    float total = (marks1 + marks2 + marks3)/3;
    printf("%a ge is: %f\n", total);
    if(total < 40 || marks1 < 33 || marks2 < 33 || marks3 < 33) 
        printf("Fail");
    else printf("Pass");
    return 0;
}