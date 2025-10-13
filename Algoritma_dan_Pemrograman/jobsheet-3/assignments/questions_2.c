#include <stdio.h>

int main() {
    int tinggi = 5;
    int i, j;

    for (i = 1; i <= tinggi; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}