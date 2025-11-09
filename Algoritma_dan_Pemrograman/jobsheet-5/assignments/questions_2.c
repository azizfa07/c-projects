#include <stdio.h>

int main() {
    int n;
    int a = 0;
    int b = 1;
    int berikutnya;

    printf("Masukkan batas maksimum deret Fibonacci: ");
    scanf("%d", &n);

    printf("Deret Fibonacci (mulai dari 1) sampai %d:\n", n);

    while (b <= n) {

        printf("%d ", b);

        berikutnya = a + b;
        a = b;
        b = berikutnya;
    }

    printf("\n");
    return 0;
}