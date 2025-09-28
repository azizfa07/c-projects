#include <stdio.h>

int main () {
    printf("Pendapatan Salesman\n\n");

    float pendapatan = 0;
    float uang_jasa  = 0;
    float komisi     = 0;
    float total      = 0;

    printf("Masukkan pendapatan anda    : ");
    scanf("%f", &pendapatan);

    printf("\n");

    if (pendapatan <= 200000) {
        uang_jasa        = pendapatan * 0.1;
        komisi           = 10000;
        total            = pendapatan + uang_jasa + komisi;
    } else if (pendapatan > 200000 && pendapatan == 500000) {
        uang_jasa        = pendapatan * 0.15;
        komisi           =  20000;
        total            = pendapatan + uang_jasa + komisi;
    } else if (pendapatan > 500000) {
        uang_jasa        = pendapatan * 0.2;
        komisi           = 20000;
        total            = pendapatan + uang_jasa + komisi;
    } else {
        printf("pendapatan tidak valid");
    }

    printf("Pendapatan dari jasa       : Rp. %.2f\n", uang_jasa);
    printf("Pendapatan dari komisi     : Rp. %.2f\n", komisi);
    printf("Total pendapatan           : Rp. %.2f\n", total);

    return 0;
}