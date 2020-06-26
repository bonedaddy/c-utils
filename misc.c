#include <stdio.h>
// the ".." indicates to import from local directory
#include "array_len.h"

// this syntax lets us define a char array with 1000 elements
const char c[] = {[0] = 'c', [1000] = '\n'};
int alter(int ii[]);
int main(void) {
    printf("%c\n", c[999]);
    int i[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    alter(i);
    if (i[9] != 0) {
        printf("not zero");
        return -1;
    }
    return 0;
}

int alter(int ii[]) {
    if (array_lens(ii) > 10) {
        return -1;
    }
    ii[9] = 0;
    return 0;
}