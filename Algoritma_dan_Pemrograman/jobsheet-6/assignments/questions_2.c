#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ubahKapital (char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

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
    char kalimat [100];
    printf("Masukkan kalimat : ");

    fgets (kalimat, sizeof(kalimat), stdin);
    kalimat [strcspn(kalimat, "\n")] = 0;

    ubahKapital(kalimat);
    printf("Kapital          : %s\n", kalimat);

    balikString(kalimat);
    printf("Balik            : %s\n", kalimat);
}