#include <stdio.h>
#include <string.h>

int main () {
    char kalimat [100];
    int jumlahSpasi = 0;

    printf("Masukkan kalimat anda : ");
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\n")] = 0;

    for (int i = 0; kalimat[i] != '\0'; i++) {
        if (kalimat[i] == ' ') {
            jumlahSpasi++;
        }
    }

    printf("Kalimat anda          : %s\n", kalimat);
    printf("julah karakter        : %zu\n", strlen(kalimat));
    printf("jumlah spasi          : %d\n", jumlahSpasi);
}