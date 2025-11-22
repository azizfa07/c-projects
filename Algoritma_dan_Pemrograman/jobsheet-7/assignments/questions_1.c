#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct {
    char nama[30];
    char alamat[30];
    float ipk;
} mahasiswa[10];

int main() {
    int i;
    char buffer_angka[15];

    printf("=== INPUT DATA 10 MAHASISWA (Metode FGETS) ===\n");

    for(i = 0; i < 10; i++) {
        printf("\nMahasiswa ke-%d :\n", i + 1);

        printf("Nama Mahasiswa   : ");
        fgets(mahasiswa[i].nama, sizeof(mahasiswa[i].nama), stdin);
        mahasiswa[i].nama[strcspn(mahasiswa[i].nama, "\n")] = 0;

        printf("Alamat Mahasiswa : ");
        fgets(mahasiswa[i].alamat, sizeof(mahasiswa[i].alamat), stdin);
        mahasiswa[i].alamat[strcspn(mahasiswa[i].alamat, "\n")] = 0;

        printf("IPK Mahasiswa    : ");
        fgets(buffer_angka, sizeof(buffer_angka), stdin);
        mahasiswa[i].ipk = atof(buffer_angka);
    }

    // MENAMPILKAN DATA
    printf("\n\n=== HASIL DATA YANG DIINPUT ===\n");
    printf("%-20s %-20s %-10s\n", "NAMA", "ALAMAT", "IPK");
    printf("----------------------------------------------------\n");

    for(i = 0; i < 10; i++) {
        printf("%-20s %-20s %-10.2f\n",
               mahasiswa[i].nama,
               mahasiswa[i].alamat,
               mahasiswa[i].ipk);
    }

    printf("\n");
    return 0;
}