#include <stdio.h>
#define MAKS 30

int main () {
    int i;
    char asal[] = "Saya menyukai Bahasa C";
    char hasil[MAKS];

    i=0;
    while (asal[i] != '\0') {
        hasil[i] = asal[i];
        i++;
    }

    hasil[i] = '\0';
    printf("Isi hasil : %s\n", hasil);
}