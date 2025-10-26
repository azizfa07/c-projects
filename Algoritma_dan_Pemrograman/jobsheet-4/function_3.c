#include <stdio.h>

void HkOhm()
{
    float V, R, I;
    printf("isikan nilai tegangannya? ");
    scanf("%f", &V);
    printf("isikan nilai Resistansinya? ");
    scanf("%f", &R);
    I = V / R;
    printf("\nArus = %5.3f ampere dari tegangan= %5.1f volt dan resistansi = %5.1f Ohm\n", I, V, R);
}

void KonversiSuhu()
{
    float C, R, F;
    printf("CELCIUS  REAMUR  FAHRENHEIT");
    printf("\n=============================\n");
    for (C = 0; C <= 100; C += 10)
    {
        R = C * 4 / 5;
        F = C * 9 / 5 + 32;
        printf("%8.2f%8.2f%8.2f\n", C, R, F);
    }
}

int main()
{
    int Pilih;
    printf("MENU PILIHAN \n[1] Hukum Ohm\n[2] Konversi Suhu");
    printf("\n\nPilihan anda? ");
    scanf("%d", &Pilih);

    switch (Pilih)
    {
        case 1:
            HkOhm();
            break;
        case 2:
            KonversiSuhu();
            break;
        default:
            printf("Anda salah pilih !!!");
    }

    return 0;
}