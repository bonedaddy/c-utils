#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "safe_mem.h"

typedef struct test_data {
    char c[100];
    bool b[100];
} test_data;

int main(void) {
    test_data *td = (test_data *)malloc(sizeof(test_data));
    td->c[0] = 'c';

    memory_object mobj = new_memory_object(td);

    td = mobj.data;

    if (td->c[0] != 'c') {
        printf("failed to copy object correctly");
        return -1;
    }

    int result = free_memory_object(&mobj);

    if (result != 0 ) {
        printf("failed to free object");
        return -1;
    }

    result = free_memory_object(&mobj);

    if (result != -1) {
        printf("failed to prevent double free");
        return -1;
    }
    
    return 0;
}