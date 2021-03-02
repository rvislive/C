// Check Whether the Entered Year is Leap Year or not

#include<stdio.h>

void isLeapYear (int year) {
    if((((year%4) == 0) && (year%100 != 0)) || (((year%4) == 0) && (year%100 == 0) && (year%400 == 0))) {
        printf("%d is a leap year", year);
    } else {
        printf("%d is not a leap year", year);
    }
}

int main() {
    int year;
    printf("Enter a year\n");
    scanf("%d", &year);
    isLeapYear(year);
    return 0;
}