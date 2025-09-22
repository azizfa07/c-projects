#include <stdio.h>

int main () {
    printf("Luas Segitiga\n\n");

    float alas, tinggi, luas;
    char satuan[10];

    printf("Masukkan panjang alas    : ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga : ");
    scanf("%f", &tinggi);
    printf("Masukkan satuan          : ");
    scanf("%s", satuan);

    printf("\n");

    luas = 0.5 * alas * tinggi;

    printf("Luas lingkaran adalah    : %.2f %s \n", luas, satuan);

    return 0;
}