#include <stdio.h>

int main () {
    int i,j;
    int bil[3] [3] = {{ 30 , 40 , 50 }, { 60 , 70 , 80 }, { 90 , 95 , 100 }};

    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 2; j++) {
            printf("Isi bilangan = %d\n", bil[i][j]);
        }
    }
}