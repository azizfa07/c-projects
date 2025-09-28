#include <stdio.h>

int main () {
    int umur;

    printf("Berapakah umur anda : ");
    scanf("%d", &umur);

    if (umur >= 17 ) {
        printf("Anda boleh daftar ktp\n");
    } else {
        printf("Anda masih anak-anak\n");
    }

    printf("\n\n");
}