#include <stdio.h>
int main () {
    float Q, I, t;

    printf("========================================\n");
    printf("       PERHITUNGAN MUATAN LISTRIK \n");
    printf("========================================\n");
    printf("Rumus: Q = I x t(detik)\n\n");

    printf("Masukkan Arus (A) :");
    scanf("%f", &I);
    printf("Masukkan Waktu (detik): ");
    scanf("%f", &t);

    Q = I * t;
    printf("\n========================================\n");
    printf("Hasil Perhitungan:\n");
    printf("Arus (I)      = %.2f A\n", I);
    printf("Waktu (t)     = %.2f detik\n", t);
    printf("Muatan (Q)    = %.2f Coulomb\n", Q);
    printf("========================================\n");
}


