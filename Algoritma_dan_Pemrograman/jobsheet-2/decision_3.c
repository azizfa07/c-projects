#include <stdio.h>

int main () {
    float nilai;

    printf("Berapakah nilai anda : ");
    scanf("%f",&nilai);

    if (nilai < 40) {
        printf("Anda mendapatkan nilai E");
    } else if (nilai < 60) {
        printf("Anda mendapatkan nilai D");
    } else if (nilai < 70) {
        printf("Anda mendapatkan nilai C");
    } else if (nilai < 80) {
        printf("Anda mendapatkan nilai B");
    } else {
        printf("Anda mendapatkan nilai A");
    }

    printf("\n\n");
}