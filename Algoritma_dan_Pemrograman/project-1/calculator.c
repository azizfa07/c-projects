#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void menu () {
    printf("Kalkulator Sederhana\n");
    printf("Daftar operator yang diizinkan\n\n");
    printf("+   : Penjumlahan\n");
    printf("-   : Pengurangan\n");
    printf("*   : Perkalian\n");
    printf("/   : Pembagian\n");
    printf("^   : Pangkat\n");
    printf("s   : Akar kuadrat\n");
    printf("c   : Akar pangkat 3\n");
    printf("i   : sin\n");
    printf("o   : cos\n");
    printf("t   : tan\n");
    printf("q   : Keluar\n");
}

int main () {
    for (;;) {
    char tombol;
    float angka1, angka2, hasil;

    menu();

    printf("\nPilih operator yang anda pilih: ");
    scanf(" %c", &tombol);
    if (tombol == 'q' || tombol == 'Q') {
        exit(0);
    }

    printf("Masukkan angka 1: ");
    scanf("%f", &angka1);

        if ((tombol != 's' && tombol != 'S') &&
            (tombol != 'c' && tombol != 'C') &&
            (tombol != 'i' && tombol != 'I') &&
            (tombol != 'o' && tombol != 'O') &&
            (tombol != 't' && tombol != 'T')) {
                printf("Masukkan angka 2: ");
                scanf("%f", &angka2);
        }

    switch (tombol) {
        case '+':
            hasil = angka1 + angka2;
            printf("%.0f\n", hasil);
            break;
        case '-':
            hasil = angka1 - angka2;
            printf("%.0f\n", hasil);
            break;
        case '*':
            hasil = angka1 * angka2;
            printf("%.0f\n", hasil);
            break;
        case '/':
            hasil = angka1 / angka2;
            printf("%.0f\n", hasil);
            break;
        case '^':
            hasil = pow(angka1, angka2);
            printf("%.0f\n", hasil);
            break;
        case 's':
            hasil = sqrt(angka1);
            printf("%.0f\n", hasil);
            break;
        case 'c':
            hasil = cbrt(angka1);
            printf("%.0f\n", hasil);
            break;
        case 'i':
            hasil = sin(angka1);
            printf("%.0f\n", hasil);
            break;
        case 'o':
            hasil = cos(angka1);
            printf("%.0f\n", hasil);
            break;
        case 't':
            hasil = tan(angka1);
            printf("%.0f\n", hasil);
            break;
        case 'q':
            exit(0);
            break;
        default:
            printf("Pilihan tombol tidak valid");
         }
    }
}