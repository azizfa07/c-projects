#include <stdio.h>

int main() {
    int angka[7] = {25, 8, 41, 12, 90, 2, 55};
    int n = 7;
    int i;

    int nilai_tertinggi;
    int nilai_terendah;

    nilai_tertinggi = angka[0];
    nilai_terendah = angka[0];

    for (i = 1; i < n; i++) {
        if (angka[i] > nilai_tertinggi) {
            nilai_tertinggi = angka[i];
        }
        if (angka[i] < nilai_terendah) {
            nilai_terendah = angka[i];
        }
    }

    printf("Isi array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", angka[i]);
    }
    printf("\n");
    printf("Nilai tertinggi: %d\n", nilai_tertinggi);
    printf("Nilai terendah : %d\n", nilai_terendah);

    return 0;
}