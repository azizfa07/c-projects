#include <stdio.h>

int main () {
    int bil [4], i;
    printf("Cara mengisi array melalui scanf: \n");
    for (i = 0; i < 3; i++) {
        printf("Isikanlah data ke-%d = ", i + 1);
        scanf("%d", &bil[i]);
    }

    printf("\nMengeluarkan data array\n");
    for (i=1; i<=3; i++) {
        printf("Iis array ke-%d      = %d\n", i + 1, bil[i]);
    }
};