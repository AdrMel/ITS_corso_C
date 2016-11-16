//
// Created by Adriano on 26/10/2016.
//

#include <stdio.h>

int main() {
    float array[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    int i, j, p;
    float avg = 0;
    float psum = 0;

    for(i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
        p = 1;
        for(j = 0; j < sizeof(array) / sizeof(array[0]); j++) {
            if(array[i] == array[j]){
                p++;
            }
        }

        avg += (array[i] * p);
        psum += p;
    }

    printf("Media ponderata: %.2f", (avg / psum));

    return 0;
}