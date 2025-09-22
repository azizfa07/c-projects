#include <stdio.h>

int main () {
    printf("Volume Balok\n\n");

    float panjang, lebar, tinggi, volume;
    char satuan[10];

    printf("Masukkan panjang            : ");
    scanf("%f", &panjang);
    printf("Masukkan lebar              : ");
    scanf("%f", &lebar);
    printf("Masukkan tinggi             : ");
    scanf("%f", &tinggi);
    printf("Masukkan satuan             : ");
    scanf("%s", satuan);

    printf("\n");

    volume = panjang * lebar * tinggi;

    printf("Volume baloknya adalah      : %.2f %s \n", volume, satuan);

    return 0;
}