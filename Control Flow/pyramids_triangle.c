// Print pyramids and triangles

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
// * * * * * * *

//                 *
//             *   *   *
//         *   *   *   *   *
//     *   *   *   *   *   *   *
// *   *   *   *   *   *   *   *   *

#include<stdio.h>

int main() {
    for(int i = 0; i < 7 ; i ++) {
        for(int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for(int i = 0; i < 9; i++) {
        for(int j=1; j<=i; j++) {
            printf("*\t");
        }

    }

    return 0;
}