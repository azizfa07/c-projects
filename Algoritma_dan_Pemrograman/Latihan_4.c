#include <stdio.h>

int main()
{
    printf("Latihan 4\n\n");

    float sisi, alas, tinggi, luas, keliling;
    char satuanPanjang[30];

    printf("Masukkan sisi jajar genjang: ");
    scanf("%f", &sisi);
    printf("Masukkan alas jajar genjang: ");
    scanf("%f", &alas);
    printf("Masukkan tinggi jajar genjang: ");
    scanf("%f", &tinggi);
    printf("Masukkan satuan panjang: ");
    scanf("%s", satuanPanjang);

    luas = 2 * (sisi + alas);
    keliling = 4 * sisi;

    printf("Dengan sisi, alas, tinggi berturut-turut adalah %.0f %s, %.0f %s, %.0f %s\n", sisi, satuanPanjang, alas, satuanPanjang, tinggi, satuanPanjang );
    printf("Luasnya adalah: %.0f %s persegi\n", luas, satuanPanjang);
    printf("Kelilingnya adalah: %.0f %s \n", keliling, satuanPanjang);
}