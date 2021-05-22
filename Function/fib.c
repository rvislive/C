#include<stdio.h>

int fib(int n) {
   if(n == 0 || n == 1) {
       return n;
   } else {
       return (fib(n-1) + fib(n-2));
   }
}

int main() {
    int n, m = 0; 
    printf("Enter the no of series\n");
    scanf("%d", &n);
    for(int i =0; i<n; i ++) {
        printf("%d ", fib(m));
        m++;
    }
    return 0;
}