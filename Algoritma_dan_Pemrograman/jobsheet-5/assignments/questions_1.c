#include <stdio.h>

int main () {
    int nilai [5] = {1,2,3,4,5};
    int n = 5;

    for (int i=0; i < 5; i++) {
        printf("indeks %d berisi nilai %d\n", i, nilai[i]);
    }
}