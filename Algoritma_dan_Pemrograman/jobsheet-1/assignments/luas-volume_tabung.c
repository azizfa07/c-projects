#include <stdio.h>

int main () {
    printf("Luas dan Volume Tabung\n\n");

    float jari2, tinggi, phi, Luas, Volume;
    char satuan[10];

    printf("Masukkan jari2          : ");
    scanf("%f", &jari2);
    printf("Masukkan tinggi         : ");
    scanf("%f", &tinggi);
    printf("Masukkan satuan         : ");
    scanf("%s", satuan);

    printf("\n");

    phi = 22/7;
    Luas = phi * jari2 * jari2;
    Volume = Luas * tinggi;

    printf("Luas tabung adalah      : %.2f %s\n", Luas, satuan);
    printf("Volume tabung adalah    : %.2f %s\n", Volume, satuan);
    return 0;
}