#include <stdio.h>
#include <string.h>

void balikString (char str[]) {
    int panjang = strlen(str);
    int kiri = 0;
    int kanan = panjang - 1;

    while (kiri < kanan) {
        char temp = str[kiri];
        str[kiri] = str[kanan];
        str[kanan] = temp;
        kiri++;
        kanan--;
    }
}

int main () {
    char kalimat[100];
    char kalimatAsli[100];

    printf("---Pendeteksi kalimat palindrom---\n");

    printf("Masukkan kalimat           : ");
    fgets (kalimat, sizeof(kalimat), stdin);
    kalimat [strcspn(kalimat, "\n")] = 0;

    strcpy(kalimatAsli, kalimat);

    balikString(kalimat);

    printf("Kalimat asli               : %s\n", kalimatAsli);
    printf("Hasil dibalik              : %s\n", kalimat);
    printf("-----------------------------------");
    if (strcmp(kalimatAsli, kalimat) == 0) {
        printf("\nStatus                     : Kalimat PALINDROM.\n");
    } else {
        printf("\nStatus                     : Bukan Kalimat PALINDROM.\n");
    }

    return 0;
}