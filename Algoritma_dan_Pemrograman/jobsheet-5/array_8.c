#include <stdio.h>

int main () {
    int bil [4] [4], i, j;

    printf("Cara mengisi data array 2 dimensi melalui scanf()\n");
    for (i = 0; i <= 3; i++) {
        for (j = 0; j <= 3; j++) {
            printf("Isikanlah data baris %d kolom %d = ", i+1, j+1);
            scanf("%d", &bil[i][j]);
        }
    }
    printf("\nMengeluarkan data array");
    for (i = 0; i <= 3; i++) {
        for (j = 0; j <= 3; j++) {
            printf("\nNilai array bari ke %d kolom ke %d = %d", i+1, j+1, bil[i][j]);
        }
    }

}