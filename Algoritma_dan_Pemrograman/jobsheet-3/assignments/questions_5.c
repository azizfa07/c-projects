#include <stdio.h>

int main() {
    int bilangan;
    int hasil = 0;

    printf("Masukkan angka yang anda inginkan: ");
    scanf("%d", &bilangan);


    if (bilangan < 1) {
        printf("Angka harus positif untuk menghitung bilangan triangular.\n");
        return 1;
    }

    for (int i = bilangan; i >= 1; i--) {
        hasil += i;
        printf("%d", i);
        if (i > 1) {
            printf(" + ");
        }
    }

    printf(" = %d\n", hasil);

    return 0;
}