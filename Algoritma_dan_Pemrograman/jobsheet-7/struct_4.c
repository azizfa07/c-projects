#include <stdio.h>

int main () {
    struct zodiak {
        char nama[100];
        int tgl_awal;
        int bln_awal;
        int tgl_akhir;
        int bln_akhir;
    };

    static struct zodiak bintang = {"Sagitarius", 22, 11, 21, 12};
    int tgl_lahir, bln_lahir, thn_lahir;

    printf("Masukkan tanggal lahir anda (XX-XX-XXXX) : ");
    scanf("%d-%d-%d", &tgl_lahir , &bln_lahir , &thn_lahir);

    if ((tgl_lahir >= bintang.tgl_awal && bln_lahir == bintang.bln_awal) || (tgl_lahir <= bintang.tgl_akhir && bln_lahir == bintang.bln_akhir)) {
        printf("Bintang anda adalah                      : %s\n", bintang.nama);
    }  else {
        printf("Bintang anda bukan                       : %s\n", bintang.nama);
    }
}