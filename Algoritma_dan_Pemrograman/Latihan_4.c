#include <stdio.h>

int main()
{
    printf("Latihan 4\n\n");

    float sisi, alas, tinggi, luas, keliling;
    printf("Masukkan sisi jajar genjang: ");
    scanf("%f", &sisi);
    printf("Masukkan alas jajar genjang: ");
    scanf("%f", &alas);
    printf("Masukkan tinggi jajar genjang: ");
    scanf("%f", &tinggi);

    luas = alas * tinggi;
    keliling = 4 * sisi;

    printf("Dengan sisi, alas, tinggi berturut-turut adalah %.0f m, %.0f m, %.0f m\n", sisi, alas, tinggi);
    printf("Luasnya adalah: %.0f\n m persegi", luas);
    printf("Kelilingnya adalah: %.0f m\n", keliling);
}