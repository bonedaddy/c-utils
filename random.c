#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int lower, int upper);
char * getRandomString(int stringLength);

// defines a constant character array
const char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main(void) {
    // seed random number generate using time
    srand(time(0));
    printf("%c\n", letters[getRandomNumber(0, 25)]);    
    printf("%s\n", getRandomString(10));
    return 0;
}

char * getRandomString(int stringLength) {
    char *word;
    for (int i = 0; i < stringLength; i++) {
        word += letters[getRandomNumber(0, 25)];
    }
    return word;
}

int getRandomNumber(int lower, int upper) {
    return (rand() % (upper - lower + 1)) + lower;
}