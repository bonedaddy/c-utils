#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int safe_add_int(int x, int y);
int safe_sub_int(int x, int y);
unsigned int safe_sub_uint(unsigned int x, unsigned int y, bool *passed);
unsigned int safe_add_uint(unsigned int x, unsigned int y, bool *passed);
unsigned int safe_div_uint(unsigned int x, unsigned int y, bool *passed);
unsigned int safe_mod_uint(unsigned int x, unsigned int y, bool *passed);
unsigned int safe_mul_uint(unsigned int x, unsigned int y, bool *passed);

int safe_add_int(int x, int y) {
    if (x > INT_MAX - y) {
        return -1;
    }
    return x + y;
}

// subtracts y from x
int safe_sub_int(int x, int y) {
    if (x - y > x) {
        return -1;
    }
    return x - y;
}

// subtracts y from x
unsigned int safe_sub_uint(unsigned int x, unsigned int y, bool *passed) {
    if (y > x) {
        *passed = false;
        return 0;
    }
    *passed = true;
    return x - y;
}

// adds x to y
unsigned int safe_add_uint(unsigned int x, unsigned int y, bool *passed) {
    if (x + y < x || x + y < y) {
        *passed = false;
        return 0;
    }
    *passed = true;
    return x + y;
}

// divides x by y
unsigned int safe_div_uint(unsigned int x, unsigned int y, bool *passed) {
    if (y == 0) {
        *passed = false;
        return 0;
    }
    *passed = true;
    return x / y;
}

// modulo x by y
unsigned int safe_mod_uint(unsigned int x, unsigned int y, bool *passed) {
    if (y == 0) {
        *passed = false;
        return 0;
    }
    *passed = true;
    return x % y;
}

// multiply x by y
unsigned int safe_mul_uint(unsigned int x, unsigned int y, bool *passed) {
    if (x == 0 || y == 0) {
        *passed = true;
        return 0;
    }
    unsigned int z = x * y;
    if (z < x || z < y) {
        *passed = false;
        return 0;
    }
    *passed = true;
    return z;
}