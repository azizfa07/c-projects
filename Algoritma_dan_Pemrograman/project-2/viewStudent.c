#include <stdio.h>
#include "studentData.h"


#define COLOR_RESET  "\033[0m"
#define COLOR_RED    "\033[1;31m"
#define COLOR_GREEN  "\033[1;32m"
#define COLOR_CYAN   "\033[1;36m"
#define COLOR_YELLOW "\033[1;33m"

void viewStudent() {
    if (numberOfStudents == 0) {
        printf("\n%s[!] Data masih kosong. Silakan tambah data dulu.%s\n", COLOR_RED, COLOR_RESET);
        return;
    }

    printf("\n%s=== LIHAT DATA SISWA (%d Siswa) ===%s\n", COLOR_CYAN, numberOfStudents, COLOR_RESET);

    char *garis = "+-----+------------+-------+--------+----------------------+--------------------------+";

    printf("%s%s%s\n", COLOR_YELLOW, garis, COLOR_RESET);

    printf("%s|%s %-3s %s|%s %-10s %s|%s %-5s %s|%s %-6s %s|%s %-20s %s|%s %-24s %s|%s\n",
           COLOR_YELLOW, COLOR_CYAN, "No",
           COLOR_YELLOW, COLOR_CYAN, "NIS",
           COLOR_YELLOW, COLOR_CYAN, "Absen",
           COLOR_YELLOW, COLOR_CYAN, "Kelas",
           COLOR_YELLOW, COLOR_CYAN, "Nama Lengkap",
           COLOR_YELLOW, COLOR_CYAN, "Alamat",
           COLOR_YELLOW, COLOR_RESET);

    printf("%s%s%s\n", COLOR_YELLOW, garis, COLOR_RESET);

    for (int i = 0; i < numberOfStudents; i++) {
        printf("%s|%s %-3d %s|%s %-10d %s|%s %-5d %s|%s %-6s %s|%s %-20s %s|%s %-24s %s|%s\n",
               COLOR_YELLOW, COLOR_RESET, i + 1,
               COLOR_YELLOW, COLOR_RESET, studentList[i].nis,
               COLOR_YELLOW, COLOR_RESET, studentList[i].presentNumber,
               COLOR_YELLOW, COLOR_RESET, studentList[i].classroom,
               COLOR_YELLOW, COLOR_RESET, studentList[i].name,
               COLOR_YELLOW, COLOR_RESET, studentList[i].address,
               COLOR_YELLOW, COLOR_RESET);

        printf("%s%s%s\n", COLOR_YELLOW, garis, COLOR_RESET);
    }

    printf("\n%s>> Tekan Enter untuk kembali ke menu...%s", COLOR_GREEN, COLOR_RESET);

    char c;
    while ((c = getchar()) != '\n' && c != EOF);
    getchar();
}