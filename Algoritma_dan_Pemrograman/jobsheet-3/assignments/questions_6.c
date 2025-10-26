#include <stdio.h>

int main() {
    int tinggi = 5;
    int i, j;

    i = tinggi;
    while (i >= 1) {
        j = 1;
        while (j <= i) {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i--;
    }

    return 0;
}