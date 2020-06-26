#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>

int getRandomNumber(int lower, int upper);
char *getRandomString(int stringLength);

// defines a constant character array
const char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main(void) {
    // seed random number generate using time
    srand(time(0));
    char *word = getRandomString(10);
    printf("%s\n", word);
    return 0;
}

char *getRandomString(int stringLength) {
    // create an array of chars of length stringLength
    char word[stringLength];
    for (int i = 0; i < stringLength; i++) {
        word[i] = letters[getRandomNumber(0, 25)];
    }
    // allocate a chunk of memory sized to the word array
    char *retWord = malloc(sizeof(word));
    // assign each char from word to its corresponding vlaue in retWord
    for (int i = 0; i < stringLength; i++) {
        retWord[i] = word[i];
    }
    // return a pointer to retWord
    // i dont entirely understand why compiler complains
    // if this is left out
    return (char *)retWord;
}

int getRandomNumber(int lower, int upper) {
    return (rand() % (upper - lower + 1)) + lower;
}