#include<stdio.h>

int main() {
    double nb, nt, nl;
    char c;
    nb = nt = nl = 0;
    while((c = getchar()) != EOF) {
        if(c == ' ')
            ++nb;
        if(c == '\t') 
            ++nt;
        if(c == '\n')
            ++nl;
    }
    printf("No. of blank, tab, and line are %.0f, %0.f, and %.0f resp.", nb, nt, nl);
    return 0;
}