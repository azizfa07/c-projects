#include <stdio.h>

struct siswa {
    char nama[20];
    char alamat[30];
    int umur;
};

int main () {
    int i;
    struct siswa siswa[3];
    for (i = 0; i < 3; i++) {
        printf("Mahasiswa ke-%d\n", i+1);
        printf("Tulis nama mahasiswa       : ");
        scanf("%s", &siswa[i].nama);
        printf("Tulis alamat mahasiswa     : ");
        scanf("%s", &siswa[i].alamat);
        printf("Tulis umur mahasiswa       : ");
        scanf("%d", &siswa[i].umur);
    }

    printf("\n-----------------------------------------------------------------");
    printf("\nNAMA                    ALAMAT           UMUR ");
    printf("\n-----------------------------------------------------------------");

    for (i = 0; i < 3; i++) {
    printf("\n%10s %20s %12d", siswa[i].nama, siswa[i].alamat, siswa[i].umur);
    }
    printf("\n");
}