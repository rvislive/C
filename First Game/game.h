
// To ask user name;
const char* yourName(char *name) {
    printf("May I know your name?\n");
    fgets(name, sizeof(name), stdin);
    return name;
}

// To select the level of game 
int selectLevel() {
    int levelDecider, level;
    printf("Select Level\n 1. Easy `To guess a number between 1 and 10`, Press 1\n 2. Medium `To guess a number between 1 and 50`, Press 2\n 3. Hard `To guess a number between 1 and 100`, Press 3\n");
    scanf("%d", &level);
    switch(level) {
        case 1:
            levelDecider = 10;
            break;
        case 2:
            levelDecider = 50;
            break;
        case 3:
            levelDecider = 100;
            break;
        default: 
            printf("Oh'ah ! Please select the correct options.");
    }
    return levelDecider;
}

// yellow color to show the result
void yellow() {
  printf("\033[1;33m");
}

// reset the color
void reset() {
  printf("\033[0m");
}

// main play game logic
void playGame(int number, int levelDecider) {
    int guessNumberd, guessAttempt = 1;
    do {    
        printf("Guess the number between 1 to %d\n", levelDecider);
        scanf("%d", &guessNumberd);
        if(number > guessNumberd) {
            printf("Heigher number please!\n");
        } else if (number < guessNumberd) {
            printf("Lower number please!\n");
        } else {
            yellow();
            printf("Wow !!! you guessed the number at %d attempt(s)\n", guessAttempt);
            reset();
        }
        guessAttempt ++;
    } while (number != guessNumberd);
}