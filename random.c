#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int lower, int upper);

// defines a constant character array
const char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main(void) {
    // seed random number generate using time
    srand(time(0));
    printf("%c\n", letters[getRandomNumber(0, 25)]);    
    return 0;
}


int getRandomNumber(int lower, int upper) {
    return (rand() % (upper - lower + 1)) + lower;
}