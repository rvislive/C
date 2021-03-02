// sum of two arrays

#include<stdio.h>

int main() {
    int arr1[3][3], arr2[3][3];
    printf("Enter the elements of first array\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++ ) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements of second array\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++ ) {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The sum of above array are:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++ ) {
            printf("%d ", (arr1[i][j] + arr2[i][j]));
        }
        printf("\n");
    }
    return 0;
}