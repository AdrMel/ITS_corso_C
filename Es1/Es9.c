//
// Created by Adriano on 26/10/2016.
//

#include <stdio.h>

int main() {
    float array[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int i, j, k, l;
    float tmax = 0;

    for(i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
        for(j = 0; j < (sizeof(array) / sizeof(array[0])); j++) {
            if(array[i] > array[j]) {
                tmax = array[i];
                array[i] = array[j];
                array[j] = tmax;
            }
        }
    }

    printf("Array decrescente: \n");
    for (k = 0; k < (sizeof(array) / sizeof(array[0]));k++) {
        printf("%f, ", array[k]);
    }

    printf("\n");

    printf("Array crescente: \n");
    for (l = (sizeof(array) / sizeof(array[0])); l > 0; l--) {
        printf("%f, ", array[l - 1]);
    }

    return 0;
}