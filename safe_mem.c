#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct memory_object {
    void *data;
    bool freed;
} memory_object;

typedef struct test_data {
    char c[100];
    bool b[100];
} test_data;

int free_memory_object(memory_object *obj);

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

int free_memory_object(memory_object *obj) {
    if (obj->freed) {
        return -1;
    }
    obj->freed = true;
    free(obj->data);
    obj->data = NULL;
    return 0;
}