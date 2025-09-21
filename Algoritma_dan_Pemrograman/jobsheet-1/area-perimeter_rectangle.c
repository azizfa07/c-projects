#include <stdio.h>

int main () {
    float Panjang, Lebar, Keliling, Luas;
    char Satuan[10];

    printf("Penghitung Kelililing dan Luas Persegi Panjang\n\n");

    printf("Masukkan panjang    : ", Panjang);
    scanf("%f", &Panjang);
    printf("Masukkan lebar      : ", Lebar);
    scanf("%f", &Lebar);
    printf("Masukkan satuan     : ", Satuan);
    scanf("%s", &Satuan);

    Keliling = 2*(Panjang+Lebar);
    Luas = Panjang*Lebar;

    printf("Dengan Panjang %.0f cm dan Lebar %.0f %s pada persegi panjang, menghasilkan \n", Panjang, Lebar, Satuan);
    printf("kelililing sebesar : %.0f %s \n", Keliling, Satuan);
    printf("dan luas sebesar   : %.0f %s \n", Luas, Satuan);

    return 0;
}