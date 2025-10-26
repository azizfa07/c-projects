#include <stdio.h>
#include <math.h>

void garis1() {
    printf("------------------\n");
}
void garis2() {
    printf("==================\n");
}
void luasSegitiga() {
    float Sisi, Luas, Keliling;

        printf("Masukkan Sisi    : ");
        scanf("%f", &Sisi);

        Luas = (Sisi * Sisi * sqrt(3)) / 4;
        Keliling = 3 * Sisi;

        printf("Luas             : %.2f\n", Luas);
        printf("Keliling         : %.2f\n", Keliling);
}

int main () {
    garis1();
    luasSegitiga();
    garis2();
}