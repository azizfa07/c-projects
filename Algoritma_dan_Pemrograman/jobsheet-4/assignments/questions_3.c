#include <stdio.h>
int main() {
    float I, R, V;

    printf("========================================================\n");
    printf("       PERHITUNGAN TEGANGAN (HUKUM OHM)\n");
    printf("========================================================\n");
    printf("Rumus: V = I x R\n\n");

    printf("Masukkan Arus (A): ");
    scanf("%f", &I);

    printf("Masukkan Resistansi (Ohm): ");
    scanf("%f", &R);

    V = I * R;

    printf("\n========================================================\n");
    printf("Hasil Perhitungan:\n");
    printf("Arus (I)        = %.2f A\n", I);
    printf("Resistansi (R)  = %.2f Ohm\n", R);
    printf("Tegangan (V)    = %.2f Volt\n", V);
    printf("========================================================\n") ;
}
