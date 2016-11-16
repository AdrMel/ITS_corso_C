#include <stdio.h>

int main() {
    int array[10];
    int i;
    int b = 10;

    for(i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        array[i] = b;
        printf("[%d] = %d\n", i, array[i]);
        b--;
    }

    return 0;
}