#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "game.h"

int main() {
    reset();
    int number, divider;
    char name[20];
    printf("Welcome %s\n", yourName(name));
    srand(time(0));
    divider = selectLevel();
    number = rand()%divider + 1;
    playGame(number, divider);
    printf("GAME OVER !!!\n");
    return 0;
}