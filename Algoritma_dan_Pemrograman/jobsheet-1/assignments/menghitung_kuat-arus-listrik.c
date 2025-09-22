#include <stdio.h>

int main () {
    printf("Menghitung Kuat Arus Listrik pada Sebuah Rangkaian\n\n");

    float I, V, R;

    printf("Masukkan besaran tegangan (V)      : ");
    scanf("%f", &V);
    printf("Masukkan besaran hambatan (ohm)    : ");
    scanf("%f", &R);

    printf("\n");

    I = V / R;

    printf("Besaran kuat arusnya adalah        : %.2f A\n", I);

    return 0;
}