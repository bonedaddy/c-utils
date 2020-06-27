#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "safe_mem.h"

int main(void) {
    test_data *td = (test_data *)malloc(sizeof(test_data));
    memory_object mobj;

    mobj.data = td;
    mobj.freed = false;
    
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