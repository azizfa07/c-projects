#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void menu () {
    printf("==========================================\n");
    printf("         Kalkulator Sederhana\n");
    printf("==========================================\n\n");
    printf("Daftar operasi yang diizinkan:\n\n");
    printf("\t+   : Penjumlahan\n");
    printf("\t-   : Pengurangan\n");
    printf("\t*   : Perkalian\n");
    printf("\t/   : Pembagian\n");
    printf("\t^   : Pangkat\n");
    printf("\ts   : Akar kuadrat\n");
    printf("\tc   : Akar pangkat 3\n");
    printf("\ti   : Sin (derajat)\n");
    printf("\to   : Cos (derajat)\n");
    printf("\tt   : Tan (derajat)\n\n");
    printf("\tm   : Lihat menu\n");
    printf("\ta   : Reset (Mulai dari awal)\n");
    printf("\tq   : Keluar\n\n");
    printf("==========================================\n\n");
}

void inputNumberValidation(float *hasil) {
    printf("Masukkan angka pertama    : ");

    while (scanf("%f", hasil) != 1) {
        printf("\n+----------------------------------------+\n");
        printf("| [ERROR] Input tidak valid.             |");
        printf("\n+----------------------------------------+\n\n");
        printf("Masukkan angka            : ");
        while (getchar() != '\n');
    }
}

void operatorInputValidation(char *operasi) {
    int inputlValid;
    do {
        printf("Pilih operasi             : ");
        scanf(" %c", operasi);

        if (*operasi == '+' || *operasi == '-' || *operasi == '*' || *operasi == '/' || *operasi == '^' ||
            *operasi == 's' || *operasi == 'S' || *operasi == 'c' || *operasi == 'C' ||
            *operasi == 'i' || *operasi == 'I' || *operasi == 'o' || *operasi == 'O' ||
            *operasi == 't' || *operasi == 'T' || *operasi == 'e' || *operasi == 'E' ||
            *operasi == 'm' || *operasi == 'M' || *operasi == 'a' || *operasi == 'A' ||
            *operasi == 'q' || *operasi == 'Q')
        {
            inputlValid = 1;
        } else {
            inputlValid = 0;
            printf("\n+----------------------------------------+\n");
            printf("| [ERROR] Pilihan operasi tidak valid    |" );
            printf("\n+----------------------------------------+\n\n");
        }

    } while (inputlValid == 0);
}


int main () {
    char operasi;
    float hasil = 0;
    float angka_input = 0;

    for (;;) {
        clearScreen();
        menu();
        inputNumberValidation(&hasil);


        for (;;) {
            printf("\n+----------------------------------------+\n");
            printf("| Hasil saat ini: %-19.2f    |\n", hasil);
            printf("+----------------------------------------+\n\n");

            operatorInputValidation(&operasi);

            if (operasi == 'q' || operasi == 'Q') {
                clearScreen();
                exit(0);
            }

            if (operasi == 'a' || operasi == 'A') {
                printf("\n[INFO] Hasil di-reset. Memulai perhitungan baru...\n");
                break;
            }

            if (operasi == 'm' || operasi == 'M') {
                clearScreen();
                menu();
                continue;
            }

            if (operasi == '+' || operasi == '-' || operasi == '*' || operasi == '/' || operasi == '^')
            {
                printf("Masukkan angka berikutnya : ");
                while (scanf("%f", &angka_input) != 1) {
                     printf("\n+----------------------------------------+\n");
                     printf("| [ERROR] Input tidak valid.             |");
                     printf("\n+----------------------------------------+\n\n");
                     printf("Masukkan angka            : ");
                     while (getchar() != '\n');
                }

                switch (operasi) {
                    case '+':
                        hasil = hasil + angka_input;
                        break;
                    case '-':
                        hasil = hasil - angka_input;
                        break;
                    case '*':
                        hasil = hasil * angka_input;
                        break;
                    case '/':
                        if (angka_input == 0) {
                            printf("\n[ERROR] Pembagian dengan nol tidak diizinkan!\n");
                        } else {
                            hasil = hasil / angka_input;
                        }
                        break;
                    case '^':
                        hasil = pow(hasil, angka_input);
                        break;
                }
            }
            else if (operasi == 's' || operasi == 'S' || operasi == 'c' || operasi == 'C' ||
                     operasi == 'i' || operasi == 'I' || operasi == 'o' || operasi == 'O' ||
                     operasi == 't' || operasi == 'T' || operasi == 'e' || operasi == 'E')
            {
                switch (operasi) {
                    case 's':
                    case 'S':
                        printf("-> Menghitung akar kuadrat dari %.2f\n", hasil);
                        hasil = sqrt(hasil);
                        break;
                    case 'c':
                    case 'C':
                        printf("-> Menghitung akar pangkat 3 dari %.2f\n", hasil);
                        hasil = cbrt(hasil);
                        break;
                    case 'i':
                    case 'I':
                        printf("-> Menghitung sin(%.2f) derajat\n", hasil);
                        hasil = sin(hasil * M_PI / 180.0);
                        break;
                    case 'o':
                    case 'O':
                        printf("-> Menghitung cos(%.2f) derajat\n", hasil);
                        hasil = cos(hasil * M_PI / 180.0);
                        break;
                    case 't':
                    case 'T':
                        printf("-> Menghitung tan(%.2f) derajat\n", hasil);
                        hasil = tan(hasil * M_PI / 180.0);
                        break;
                }
            }
            else {
                printf("\n[ERROR] Pilihan operasi '%c' tidak valid.\n", operasi);
            }
        }
    }

    return 0;
}