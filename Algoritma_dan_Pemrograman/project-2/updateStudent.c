#include <stdio.h>
#include "studentData.h"
#include "validationInput.h"
#include "updateStudent.h"

// --- DEFINISI WARNA ---
#define COLOR_RESET  "\033[0m"
#define COLOR_RED    "\033[1;31m"
#define COLOR_GREEN  "\033[1;32m"
#define COLOR_CYAN   "\033[1;36m"
#define COLOR_YELLOW "\033[1;33m"
#define COLOR_BLUE   "\033[1;34m"

void updateStudent() {
    if (numberOfStudents == 0) {
        printf("\n%s[!] Error: Database Kosong. Tidak ada data untuk diperbarui.%s\n", COLOR_RED, COLOR_RESET);
        return;
    }

    printf("\n%s=== PERBARUI DATA SISWA ===%s\n", COLOR_CYAN, COLOR_RESET);
    printf("Cari siswa berdasarkan NIS untuk mengedit datanya.\n");
    printf("---------------------------------------\n");

    int targetNIS = getValidInt("Masukkan NIS Target : ");
    int index = -1;

    for (int i = 0; i < numberOfStudents; i++) {
        if (studentList[i].nis == targetNIS) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("\n%s[x] Error: Siswa dengan NIS %d tidak ditemukan!%s\n", COLOR_RED, targetNIS, COLOR_RESET);
    }
    else {
        printf("\n%s[ DATA SAAT INI / LAMA ]%s\n", COLOR_YELLOW, COLOR_RESET);
        printf("+----------------------------------------+\n");
        printf("| %-12s : %-23s |\n", "Nama", studentList[index].name);
        printf("| %-12s : %-23s |\n", "Kelas", studentList[index].classroom);
        printf("| %-12s : %-23d |\n", "NIS", studentList[index].nis);
        printf("| %-12s : %-23d |\n", "No. Absen", studentList[index].presentNumber);
        printf("| %-12s : %-23s |\n", "Alamat", studentList[index].address);
        printf("+----------------------------------------+\n");

        printf("\n%sSilakan Masukkan Data BARU di bawah ini:%s\n", COLOR_CYAN, COLOR_RESET);
        printf("(Ketik data penggantinya)\n");
        printf("---------------------------------------\n");

        // 1. Update Nama
        getValidName("1. Nama Baru       : ", studentList[index].name);

        // 2. Update Kelas
        getValidClass("2. Kelas Baru      : ", studentList[index].classroom); // <--- TAMBAHAN 2

        // 3. Update NIS
        studentList[index].nis = getValidInt("3. NIS Baru        : ");

        // 4. Update Absen
        studentList[index].presentNumber = getValidInt("4. No. Absen Baru  : ");

        // 5. Update Alamat
        printf("5. Alamat Baru     : ");
        scanf(" %[^\n]", studentList[index].address);

        printf("\n%s✔ SUKSES: Data Berhasil Diperbarui!%s\n", COLOR_GREEN, COLOR_RESET);

        printf("\n%s[ DATA TERBARU / HASIL UPDATE ]%s\n", COLOR_BLUE, COLOR_RESET);
        printf("+----------------------------------------+\n");
        printf("| %-12s : %-23s |\n", "Nama", studentList[index].name);
        printf("| %-12s : %-23s |\n", "Kelas", studentList[index].classroom);
        printf("| %-12s : %-23d |\n", "NIS", studentList[index].nis);
        printf("| %-12s : %-23d |\n", "No. Absen", studentList[index].presentNumber);
        printf("| %-12s : %-23s |\n", "Alamat", studentList[index].address);
        printf("+----------------------------------------+\n");
    }
}