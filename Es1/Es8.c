//
// Created by Adriano on 26/10/2016.
//

#include <stdio.h>

int main() {
    float array[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int i;
    float min = 99999;
    float max = 0;
    float med;

    for(i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
       med += array[i];

       if(array[i] > max) {
           max = array[i];
       } else {
           if(array[i] < min) {
               min = array[i];
           }
       }
    }

    printf("Media = %.2f, Max = %.2f, Min = %.2f", (med / ((sizeof(array) / sizeof(array[0])))), max, min);

    return 0;
}