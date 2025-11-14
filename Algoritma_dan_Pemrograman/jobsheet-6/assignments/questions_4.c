#include <stdio.h>

int main() {
    char kalimat[100];

    printf("Ketikkan sebuah kalimat (akhiri dengan titik): ");
    fgets(kalimat, sizeof(kalimat), stdin);

    printf("\n--- Hasil ---\n");

    for (int i = 0; kalimat[i] != '\0'; i++) {

        char ch = kalimat[i];

        if (ch == ' ') {
            printf("\n");
        } else {
            printf("%c", ch);
        }
    }

    return 0;
}