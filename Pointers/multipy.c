// Multiply two matrices
#include<stdio.h>
#include<stdlib.h>

void EnterData(int firstMatrix[10][10], int firstRow, int firstColumn,int secondMatrix[10][10], int secondRow, int secondColumn) {
    
    for(int i = 0; i < firstRow; i++) {
        for(int j = 0; j < firstColumn; j++) {
            printf("firstMatrix[%d][%d]", i, j);
            scanf("%d %d", &firstMatrix[i][j]);
        }
    }

    for(int i = 0; i < secondRow; i++) {
        for(int j = 0; j < secondColumn; j++) {
            printf("secondMatrix[%d][%d]", i, j);
            scanf("%d %d", &secondMatrix[i][j]);
        }
    }
}

void Multiply(int firstMatrix[10][10],int firstRow,int firstColumn,int secondMatrix[10][10],int secondRow,int secondColumn,int multi[10][10]) {
    int i, j, k;
    for(i = 0; i < firstColumn; i++) {
        for(j = 0; j < secondRow; j++) {
            for(k = 0; k < secondRow; k++ ) {
                multi[i][j] += firstMatrix[i][k]*secondMatrix[k][j]; 
            }
        }
    }
}

void Display(int multi[10][10],int firstColumn,int secondRow) {
    int i, j;
    for(i = 0; i < firstColumn; i++) {
        for(j = 0; j < secondRow; j++) {
            printf("%d%d", multi[i][j]);
        }
    }
}

int main() {
   int firstMatrix[10][10], secondMatrix[10][10], multi[10][10], firstRow, secondRow, firstColumn, secondColumn;
   do {
        printf("Enter the number of row and column of the first matrix\n");
        scanf("%d %d", &firstRow, &firstColumn);

        printf("Enter the number of row and column of the secound matrix\n");
        scanf("%d %d", &secondRow, &secondColumn);
   } while (firstColumn != secondRow);

    EnterData(firstMatrix, firstRow, firstColumn, secondMatrix, secondRow, secondColumn);
    Multiply(firstMatrix, firstRow, firstColumn, secondMatrix, secondRow, secondColumn, multi);
    Display(multi, firstColumn, secondRow);
    return 0;
}