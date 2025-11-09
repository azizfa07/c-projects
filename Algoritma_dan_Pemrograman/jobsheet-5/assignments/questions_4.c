#include <stdio.h>

#define UKURAN_MAKS 100

int main() {
    int data_array[UKURAN_MAKS];
    int n;
    int i;
    int nilai_terbesar;

    printf("Masukkan jumlah data yang ingin Anda input (Maks: %d): ", UKURAN_MAKS);
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Jumlah data harus lebih dari 0.\n");
        return 1;
    }
    if (n > UKURAN_MAKS) {
        printf("Error: Jumlah data melebihi batas maksimum (%d).\n", UKURAN_MAKS);
        return 1;
    }

    printf("\n--- Masukkan %d Data ---\n", n);
    for (i = 0; i < n; i++) {
        printf("Masukkan data ke-%d: ", i + 1);
        scanf("%d", &data_array[i]);
    }

    nilai_terbesar = data_array[0];

    for (i = 1; i < n; i++) {
        if (data_array[i] > nilai_terbesar) {
            nilai_terbesar = data_array[i];
        }
    }

    printf("\n--- Hasil ---\n");
    printf("Nilai terbesar yang ada di dalam array adalah: %d\n", nilai_terbesar);

    return 0;
}