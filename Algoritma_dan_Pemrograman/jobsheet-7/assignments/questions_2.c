#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct data_personil {
    char nama[30];
    char id_karyawan[15];
    float jam_terbang;
};

struct {
    struct data_personil pilot;
    struct data_personil pramugari[5];
} flight[2];

int main() {
    int i, j;
    char buffer_angka[20];

    printf("=== APLIKASI DATA KELOMPOK TERBANG ===\n");

    for(i = 0; i < 2; i++) {
        printf("\nInput Data Flight Group ke-%d :\n", i + 1);

        printf("  [Data Pilot]\n");
        printf("  Nama Pilot      : ");
        fgets(flight[i].pilot.nama, 30, stdin);
        flight[i].pilot.nama[strcspn(flight[i].pilot.nama, "\n")] = 0; // Hapus enter

        printf("  ID Karyawan     : ");
        fgets(flight[i].pilot.id_karyawan, 15, stdin);
        flight[i].pilot.id_karyawan[strcspn(flight[i].pilot.id_karyawan, "\n")] = 0;

        printf("  Jam Terbang     : ");
        fgets(buffer_angka, 20, stdin);
        flight[i].pilot.jam_terbang = atof(buffer_angka);

        printf("  [Data 5 Pramugari]\n");
        for(j = 0; j < 5; j++) {
            printf("    Pramugari ke-%d:\n", j + 1);

            printf("    Nama : ");
            fgets(flight[i].pramugari[j].nama, 30, stdin);
            flight[i].pramugari[j].nama[strcspn(flight[i].pramugari[j].nama, "\n")] = 0;

            printf("    ID   : ");
            fgets(flight[i].pramugari[j].id_karyawan, 15, stdin);
            flight[i].pramugari[j].id_karyawan[strcspn(flight[i].pramugari[j].id_karyawan, "\n")] = 0;

            printf("    Jam  : ");
            fgets(buffer_angka, 20, stdin);
            flight[i].pramugari[j].jam_terbang = atof(buffer_angka);
        }
    }

    printf("\n\n==============================================\n");
    printf("        DATA KELOMPOK PENERBANGAN\n");
    printf("==============================================\n");

    for(i = 0; i < 2; i++) {
        printf("\nFLIGHT GROUP #%d\n", i + 1);

        printf("PILOT : %s (ID: %s) - %.1f Jam\n",
               flight[i].pilot.nama,
               flight[i].pilot.id_karyawan,
               flight[i].pilot.jam_terbang);


        printf("PRAMUGARI :\n");
        for(j = 0; j < 5; j++) {
            printf("  %d. %-20s [ID: %-10s] Jam: %.1f\n",
                   j + 1,
                   flight[i].pramugari[j].nama,
                   flight[i].pramugari[j].id_karyawan,
                   flight[i].pramugari[j].jam_terbang);
        }
        printf("----------------------------------------------\n");
    }

    return 0;
}