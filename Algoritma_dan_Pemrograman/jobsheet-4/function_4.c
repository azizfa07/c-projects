#include <stdio.h>

void Persegi()
{
    float sisi, luas, keliling;

    printf("\n--- Menghitung Persegi ---\n");
    printf("Masukkan panjang sisi: ");
    scanf("%f", &sisi);

    luas = sisi * sisi;
    keliling = 4 * sisi;

    printf("Luas Persegi adalah: %.2f\n", luas);
    printf("Keliling Persegi adalah: %.2f\n", keliling);
}

void PersegiPanjang()
{
    float panjang, lebar, luas, keliling;

    printf("\n--- Menghitung Persegi Panjang ---\n");
    printf("Masukkan panjang: ");
    scanf("%f", &panjang);
    printf("Masukkan lebar: ");
    scanf("%f", &lebar);

    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);

    printf("Luas Persegi Panjang adalah: %.2f\n", luas);
    printf("Keliling Persegi Panjang adalah: %.2f\n", keliling);
}

int main()
{
    int Pilih;

    printf("MENU PILIHAN \n[1] Hitung Persegi\n[2] Hitung Persegi Panjang");
    printf("\n\nPilihan anda? ");
    scanf("%d", &Pilih);

    switch (Pilih)
    {
        case 1:
            Persegi();
            break;
        case 2:
            PersegiPanjang();
            break;
        default:
            printf("Anda salah pilih !!!");
    }

    return 0;
}