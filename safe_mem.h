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

int free_memory_object(memory_object *obj) {
    if (obj->freed) {
        return -1;
    }
    obj->freed = true;
    free(obj->data);
    obj->data = NULL;
    return 0;
}