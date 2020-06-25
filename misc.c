// this syntax lets us define a char array with 1000 elements
const char c[] = {[0] = 'c', [1000] = 'ccc'};

int main(void) {
    printf("%c\n", c[999]);
}