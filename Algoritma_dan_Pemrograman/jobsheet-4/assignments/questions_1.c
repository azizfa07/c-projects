#include <stdio.h>
#include <math.h>

void LuasdanKelilingPersegiPanjang() {
    float Panjang, Lebar, Luas, Keliling;
    char lanjut;
    for (;;) {
        printf("\n-- Menghitung Persegi Panjang --\n");
        printf("Masukkan Panjang : ");
        scanf("%f", &Panjang);
        printf("Masukkan Lebar   : ");
        scanf("%f", &Lebar);

        Luas = Panjang * Lebar;
        Keliling = 2 * (Panjang + Lebar);

        printf("Luas     : %.2f\n", Luas);
        printf("Keliling : %.2f\n", Keliling);

        printf("\nHitung lagi? (y/t) : ");
        scanf(" %c", &lanjut);

        if (lanjut == 't' || lanjut == 'T') {
            printf("Kembali ke menu utama...\n");
            break;
        }
    }
}

void LuasdanKelilingLingkaran() {
    float Jari2, phi, Luas, Keliling;
    phi = 22/7;
    char lanjut;
    while (1) {
        printf("\n-- Menghitung Luas dan Keliling Lingkaran --\n");
        printf("Masukkan Jari-jari : ");
        scanf("%f", &Jari2);

        Luas = phi * Jari2 * Jari2;
        Keliling = 2 * phi * Jari2;

        printf("Luas     : %.2f\n", Luas);
        printf("Keliling : %.2f\n", Keliling);

        printf("\nHitung lagi? (y/t) : ");
        scanf(" %c", &lanjut);

        if (lanjut == 't' || lanjut == 'T') {
            printf("Kembali ke menu utama...\n");
            break;
        }
    }
}

void LuasdanKelilingSegitigaSamaSisi() {
    float Sisi, Luas, Keliling;
    char lanjut;
    do {
        printf("\n-- Menghitung Segitiga Sama Sisi --\n");
        printf("Masukkan Sisi    : ");
        scanf("%f", &Sisi);

        Luas = (Sisi * Sisi * sqrt(3)) / 4;
        Keliling = 3 * Sisi;

        printf("Luas     : %.2f\n", Luas);
        printf("Keliling : %.2f\n", Keliling);

        printf("\nHitung lagi? (y/t) : ");
        scanf(" %c", &lanjut);

    } while (lanjut == 'y' || lanjut == 'Y');
    printf("Kembali ke menu utama...\n");
}

int main () {

    int Pilihan;

    do {
        printf("\n--- Menghitung Luas dan Keliling Bangun Datar ---\n");
        printf("[1] Persegi Panjang\n");
        printf("[2] Lingkaran\n");
        printf("[3] Segitiga Sama Sisi\n");
        printf("[0] Keluar\n");
        printf("--------------------------------------------------\n");
        printf("Masukkan pilihan anda: ");
        scanf("%d", &Pilihan);

        switch (Pilihan) {
            case 1: {
                LuasdanKelilingPersegiPanjang();
                break;
            }

            case 2: {
                LuasdanKelilingLingkaran();
                break;
            }

            case 3: {
                LuasdanKelilingSegitigaSamaSisi();
                break;
            }

            case 0:
                printf("\nTerima Kasih, ketik ./c untuk menjalankan ulang program\n");
                break;

            default:
                printf("\nPilihan tidak valid, silakan coba lagi.\n");
                break;
        }
    } while (Pilihan != 0);

    return 0;
}