//
// Created by Adriano on 26/10/2016.
//

#include <stdio.h>

int main() {
    int array[10];
    int i, sum;

    for(i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        array[i] = i;
        sum += array[i];
    }

    printf("somma totale: %d\n", sum);

    return 0;
}