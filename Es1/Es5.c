//
// Created by Adriano on 26/10/2016.
//

#include <stdio.h>
#include <math.h>

int main() {
    float array[] = {1.24, 2.574, 6.5672, 1.546, 5.8, 3};
    int i;
    float sub;

    for(i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        sub -= floorf(array[i]);
    }

    printf("Sottrazione incredibile: %.2f ", sub);

    return 0;
}