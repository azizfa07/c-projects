// addStudent.c
#include <stdio.h>
#include "validationInput.h"
#include "studentData.h"

#define COLOR_RESET  "\033[0m"
#define COLOR_RED    "\033[1;31m"
#define COLOR_GREEN  "\033[1;32m"
#define COLOR_CYAN   "\033[1;36m"
#define COLOR_YELLOW "\033[1;33m"

student studentList[100];
int numberOfStudents = 0;

void addStudent() {
    if (numberOfStudents >= 100) {
        printf("\n%s[!] Error: Penyimpanan Penuh! Tidak bisa menambah data lagi.%s\n", COLOR_RED, COLOR_RESET);
        return;
    }

    student struct1;

    printf("\n%s=== FORM TAMBAH DATA SISWA ===%s\n", COLOR_CYAN, COLOR_RESET);
    printf("Silakan isi data berikut dengan benar.\n");
    printf("----------------------------------\n");

    getValidName("1. Masukkan Nama Lengkap : ", struct1.name);

    getValidClass("2. Masukkan Kelas (misal 1-A) : ", struct1.classroom);

    struct1.nis = getValidInt("3. Masukkan NIS          : ");

    struct1.presentNumber = getValidInt("4. Masukkan No. Absen    : ");

    printf("5. Masukkan Alamat       : ");
    scanf(" %[^\n]", struct1.address);

    studentList[numberOfStudents] = struct1;
    numberOfStudents++;

    printf("\n%s✔ SUKSES: Data Siswa Berhasil Disimpan!%s\n", COLOR_GREEN, COLOR_RESET);
    printf("(Disimpan di Memori Index: %d)\n", numberOfStudents - 1);

    printf("\n%s+----------------------------------------+%s\n", COLOR_YELLOW, COLOR_RESET);
    printf("|             RINGKASAN DATA             |\n");
    printf("%s+----------------------------------------+%s\n", COLOR_YELLOW, COLOR_RESET);
    printf("| %-12s : %-23s |\n", "Nama", struct1.name);
    printf("| %-12s : %-23s |\n", "Kelas", struct1.classroom);
    printf("| %-12s : %-23d |\n", "NIS", struct1.nis);
    printf("| %-12s : %-23d |\n", "No. Absen", struct1.presentNumber);
    printf("| %-12s : %-23s |\n", "Alamat", struct1.address);
    printf("%s+----------------------------------------+%s\n", COLOR_YELLOW, COLOR_RESET);
}