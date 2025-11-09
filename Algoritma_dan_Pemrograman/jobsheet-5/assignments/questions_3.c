#include <stdio.h>

#define BARIS 2
#define KOLOM 2

int main() {
    int A[BARIS][KOLOM];
    int B[BARIS][KOLOM];
    int C[BARIS][KOLOM];

    int i, j;

    printf("--- Input Matriks A (%dx%d) ---\n", BARIS, KOLOM);
    for (i = 0; i < BARIS; i++) {
        for (j = 0; j < KOLOM; j++) {
            printf("Masukkan elemen A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n--- Input Matriks B (%dx%d) ---\n", BARIS, KOLOM);
    for (i = 0; i < BARIS; i++) {
        for (j = 0; j < KOLOM; j++) {
            printf("Masukkan elemen B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < BARIS; i++) {
        for (j = 0; j < KOLOM; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\n\n--- Hasil Operasi Matriks ---\n");

    printf("\nIsi Matriks A:\n");
    for (i = 0; i < BARIS; i++) {
        for (j = 0; j < KOLOM; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nIsi Matriks B:\n");
    for (i = 0; i < BARIS; i++) {
        for (j = 0; j < KOLOM; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("\nIsi Matriks C (A + B):\n");
    for (i = 0; i < BARIS; i++) {
        for (j = 0; j < KOLOM; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}