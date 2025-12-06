#include <stdio.h>
#include <stdlib.h> // Wajib untuk system("cls") atau system("clear")
#include "addStudent.h"
#include "viewStudent.h"
#include "updateStudent.h"
#include "deleteStudent.h"

#define COLOR_RESET  "\033[0m"
#define COLOR_CYAN   "\033[1;36m"
#define COLOR_GREEN  "\033[1;32m"
#define COLOR_YELLOW "\033[1;33m"
#define COLOR_RED    "\033[1;31m"

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void pressAnyKey() {
    printf("\n%s>> Tekan Enter untuk kembali ke menu...%s", COLOR_YELLOW, COLOR_RESET);
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
    getchar();
}

void showHeader() {
    printf("%s", COLOR_CYAN);
    printf("==========================================\n");
    printf("       SISTEM MANAJEMEN DATA SISWA        \n");
    printf("==========================================\n");
    printf("%s", COLOR_RESET);
}

typedef struct {
    char menuSection[10];
} menuSection;

void mainMenu() {
    menuSection input;

    do {
        clearScreen();

        showHeader();

        printf("\n[MENU UTAMA]\n");
        printf("1. Tambah Data Siswa\n");
        printf("2. Hapus Data Siswa\n");
        printf("3. Perbarui Data Siswa\n");
        printf("4. Lihat Data Siswa\n");
        printf("5. Keluar Program\n");

        printf("\n%sMasukkan Pilihan (1-5) : %s", COLOR_GREEN, COLOR_RESET);

        scanf("%s", input.menuSection);

        printf("\n------------------------------------------\n");

        switch(input.menuSection[0]) {
            case '1':
                addStudent();
                pressAnyKey(); // Jeda setelah selesai
                break;
            case '2':
                deleteStudent();
                pressAnyKey();
                break;
            case '3':
                updateStudent();
                pressAnyKey();
                break;
            case '4':
                viewStudent();
                pressAnyKey();
                break;
            case '5':
                printf("%sTerima kasih! Sampai jumpa lagi.%s\n", COLOR_CYAN, COLOR_RESET);
                break;
            default:
                printf("%sError: Pilihan tidak valid!%s\n", COLOR_RED, COLOR_RESET);
                pressAnyKey();
                break;
        }

    } while (input.menuSection[0] != '5');
}

int main() {
    mainMenu();
    return 0;
}