#include  <stdio.h>

int main() {
int X, Y;
    printf("Belajar looping di dalam looping\n");

    for (X=1; X<=5; X++) {
        for (Y=1; Y<=5; Y++) {
            printf("%d%d\n", X, Y);
            printf("\n");
        }
    }
}

// Bagaimanakan keluaran programnya bila perintah pada baris 11 diganti dengan printf(“%d%d”, Y,X);
// Hasilnya sama saja