#include <stdio.h>

int main() {
    float V = 10, R1 = 50, R2, I, P;
    int i;

    printf("=============================================\n");
    printf("  PERHITUNGAN ARUS DAN DAYA RANGKAIAN SERI\n");
    printf("=============================================\n");
    printf("V = 10 Volt, R1 = 50 Ohm, R2 = Potensio\n\n");

    printf("---------------------------------------------\n");
    printf("|  R2 (Ohm)  |   Arus (A)   |   Daya (W)   |\n");
    printf("---------------------------------------------\n");

    for (R2 = 10; R2 <= 100; R2 += 10) {
        I = V / (R1 + R2);
        P = (I * I) * R2;
        printf("| %8.0f   | %11.6f  |  %11.6f |\n", R2, I, P);
    }

    printf("---------------------------------------------\n");
}
