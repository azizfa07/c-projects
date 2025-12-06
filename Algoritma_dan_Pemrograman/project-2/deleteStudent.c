#include <stdio.h>
#include "studentData.h"
#include "validationInput.h"
#include "deleteStudent.h"

#define COLOR_RESET  "\033[0m"
#define COLOR_RED    "\033[1;31m"
#define COLOR_GREEN  "\033[1;32m"
#define COLOR_CYAN   "\033[1;36m"
#define COLOR_YELLOW "\033[1;33m"

void deleteStudent() {
    if (numberOfStudents == 0) {
        printf("\n%s[!] Error: Database Kosong. Tidak ada yang bisa dihapus.%s\n", COLOR_RED, COLOR_RESET);
        return;
    }

    printf("\n%s=== HAPUS DATA SISWA ===%s\n", COLOR_CYAN, COLOR_RESET);
    printf("Cari siswa berdasarkan NIS untuk dihapus.\n");
    printf("----------------------------------\n");

    int targetNIS = getValidInt("Masukkan NIS Target : ");
    int indexDitemukan = -1;

    for (int i = 0; i < numberOfStudents; i++) {
        if (studentList[i].nis == targetNIS) {
            indexDitemukan = i;
            break;
        }
    }

    if (indexDitemukan == -1) {
        printf("\n%s[x] Error: Siswa dengan NIS %d tidak ditemukan!%s\n", COLOR_RED, targetNIS, COLOR_RESET);
    }
    else {
        printf("\n%s[!] PERINGATAN: Data berikut akan dihapus PERMANEN!%s\n", COLOR_RED, COLOR_RESET);

        printf("%s+----------------------------------------+%s\n", COLOR_YELLOW, COLOR_RESET);
        printf("|              DATA DITEMUKAN            |\n");
        printf("%s+----------------------------------------+%s\n", COLOR_YELLOW, COLOR_RESET);
        printf("| %-12s : %-23s |\n", "Nama", studentList[indexDitemukan].name);
        printf("| %-12s : %-23d |\n", "NIS", studentList[indexDitemukan].nis);
        printf("| %-12s : %-23d |\n", "No. Absen", studentList[indexDitemukan].presentNumber);
        printf("| %-12s : %-23s |\n", "Alamat", studentList[indexDitemukan].address);
        printf("%s+----------------------------------------+%s\n", COLOR_YELLOW, COLOR_RESET);

        printf("\nApakah Anda yakin ingin menghapus? \n");
        printf("[%s1%s] Ya, Hapus Permanen\n", COLOR_RED, COLOR_RESET);
        printf("[%s0%s] Batal\n", COLOR_GREEN, COLOR_RESET);
        printf("Pilihan Anda (1/0): ");

        int yakin;
        scanf("%d", &yakin);

        if (yakin == 1) {
            for (int i = indexDitemukan; i < numberOfStudents - 1; i++) {
                studentList[i] = studentList[i + 1];
            }

            numberOfStudents--;

            printf("\n%s✔ SUKSES: Data berhasil dihapus dari sistem.%s\n", COLOR_GREEN, COLOR_RESET);
            printf("(Total Siswa Tersisa: %d)\n", numberOfStudents);
        } else {
            printf("\n%s[i] Operasi Dibatalkan. Data aman.%s\n", COLOR_CYAN, COLOR_RESET);
        }
    }
}