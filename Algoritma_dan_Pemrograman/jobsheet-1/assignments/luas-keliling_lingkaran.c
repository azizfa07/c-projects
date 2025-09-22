#include <stdio.h>

int main () {
    printf("Luas dan Keliling Lingkaran\n\n");

    float jari2, phi, Luas, Keliling;
    char satuan[10];

    printf("Masukkan panjang jari-jari      : ");
    scanf("%f", &jari2);
    // printf("Masukkan phi                : ");
    // scanf("%f", &phi);
    printf("Masukkan satuan                 : ");
    scanf("%s", satuan);

    phi = 22/7;
    Luas = phi * jari2 * jari2;
    Keliling = 2 * phi * jari2;

    printf("\n");

    printf("Luas lingkarannya adalah        : %.2f %s\n", Luas, satuan);
    printf("Keliling lingkarannya adalah    : %.2f %s\n", Keliling, satuan);

    return 0;
}