#include <stdio.h>
int main () {
    int pilih;

    printf("Pilih perhitungan yang diinginkan:\n");
    printf("1. Data Arus(I) dan Daya(Watt) \n");
    printf("2. Hitung Tegangan (t)\n");
    printf("3. Hitung Muatan Listrik (Q)\n");

    printf("\nPilih (1/2/3):"); scanf("%d", &pilih);

    switch(pilih) {
        case 1 :{
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

            break;
        }

        case 2 :{
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
            printf("========================================================\n");

            break;
        }

        case 3 :{
            float I, t, Q;
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

            break;
        }
    }
}


