#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

int main(void) {
    // seed random number generate using time
    srand(time(0));
    char *word = getRandomString(10);
    if (word == NULL) {
        printf("failed to generate random string");
        return -1;
    }
    printf("%s\n", word);
    free(word);
    return 0;
}
