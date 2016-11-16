//
// Created by Adriano on 26/10/2016.
//

#include <stdio.h>

int main() {
    float array[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    int i;
    float sum, avg;

    for(i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
        sum += array[i];
    }

    avg = sum / (sizeof(array) / sizeof(array[0]));
    printf("La media è: %.2f", avg);

    return 0;
}