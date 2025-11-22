#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct data_kandidat {
    char nama[50];
    char partai[30];
};

struct paslon {
    struct data_kandidat ketua;
    struct data_kandidat wakil;
    int nomor_urut;
    int jumlah_suara;
} daftar_paslon[3];

void hapus_enter(char *str) {
    str[strcspn(str, "\n")] = 0;
}

int main() {
    int i, pilihan, total_pemilih = 0;
    char buffer[10];
    int voting_aktif = 1;


    printf("=== SETUP SISTEM PEMILIHAN (ADMIN MODE) ===\n");
    printf("Silahkan input data untuk 3 Pasangan Calon\n");

    for(i = 0; i < 3; i++) {
        daftar_paslon[i].nomor_urut = i + 1;
        daftar_paslon[i].jumlah_suara = 0;

        printf("\nInput Paslon Nomor Urut %d :\n", i + 1);

        printf("  Nama Calon Ketua : ");
        fgets(daftar_paslon[i].ketua.nama, 50, stdin);
        hapus_enter(daftar_paslon[i].ketua.nama);

        printf("  Nama Calon Wakil : ");
        fgets(daftar_paslon[i].wakil.nama, 50, stdin);
        hapus_enter(daftar_paslon[i].wakil.nama);

        printf("  Partai Pengusung : ");
        fgets(daftar_paslon[i].ketua.partai, 30, stdin);
        hapus_enter(daftar_paslon[i].ketua.partai);

        strcpy(daftar_paslon[i].wakil.partai, daftar_paslon[i].ketua.partai);
    }

    system("cls");

    while(voting_aktif) {
        printf("\n\n=========================================\n");
        printf("      SELAMAT DATANG DI E-VOTING\n");
        printf("=========================================\n");

        for(i = 0; i < 3; i++) {
            printf("[%d] %s & %s\n",
                   daftar_paslon[i].nomor_urut,
                   daftar_paslon[i].ketua.nama,
                   daftar_paslon[i].wakil.nama);
            printf("    (%s)\n", daftar_paslon[i].ketua.partai);
            printf("-----------------------------------------\n");
        }

        printf("\nMasukkan Nomor Pilihan Anda (1-3) : ");
        printf("\n(Ketik 99 untuk Selesai/Rekapitulasi) : ");
        fgets(buffer, 10, stdin);
        pilihan = atoi(buffer);

        if (pilihan >= 1 && pilihan <= 3) {

            daftar_paslon[pilihan - 1].jumlah_suara++;
            total_pemilih++;
            printf("\n>> Terima kasih! Suara Anda untuk No. %d telah tersimpan.\n", pilihan);

            printf("\nTekan Enter untuk pemilih selanjutnya...");
            getchar();
            system("cls");
        }
        else if (pilihan == 99) {
            voting_aktif = 0;
        }
        else {
            printf("\n>> INVALID! Pilihan tidak tersedia.\n");
        }
    }

    printf("\n\n=== HASIL REKAPITULASI SUARA ===\n");
    printf("Total Suara Masuk: %d\n\n", total_pemilih);

    int max_suara = -1;
    int pemenang_index = -1;

    for(i = 0; i < 3; i++) {
        printf("Paslon %d (%s - %s) : %d Suara\n",
               daftar_paslon[i].nomor_urut,
               daftar_paslon[i].ketua.nama,
               daftar_paslon[i].wakil.nama,
               daftar_paslon[i].jumlah_suara);

        if(daftar_paslon[i].jumlah_suara > max_suara) {
            max_suara = daftar_paslon[i].jumlah_suara;
            pemenang_index = i;
        }
    }

    if (total_pemilih > 0) {
        printf("\n=========================================\n");
        printf("PEMENANG: Pasangan No. %d\n", daftar_paslon[pemenang_index].nomor_urut);
        printf("Selamat kepada %s & %s\n",
               daftar_paslon[pemenang_index].ketua.nama,
               daftar_paslon[pemenang_index].wakil.nama);
        printf("=========================================\n");
    }

    return 0;
}