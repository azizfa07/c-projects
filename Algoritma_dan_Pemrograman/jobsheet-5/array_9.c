#include <stdio.h>
#define MAKS 20

void pemasukkan_data(float [], int *);
void pengurutan_data(float [], int);
void penampilan_data(float [], int);

int main () {
    float data [MAKS];
    int jum_data;
    pemasukkan_data(data, &jum_data);
    pengurutan_data(data, jum_data);
    penampilan_data(data, jum_data);
}

void pemasukkan_data (float x[], int *pjumlah) {
    int jum, i;
    printf("Jumlah data = ");
    scanf("%d", &jum);

    for (i=0; i < jum; i++) {
        printf("data ke-%d =  ", i+1);
        scanf("%f", &x[i]);
    }
    *pjumlah = jum;
}

void pengurutan_data (float x[], int jumlah) {
    int i, j;
    float dummy;

    for (i=0; i < jumlah; i++) {
        for (j=i+1; j < jumlah; j++) {
            if (x[i] > x[j]) {
                dummy = x[i];
                x[i] = x[j];
                x[j] = dummy;
            }
        }
    }
}

void penampilan_data (float x[], int jumlah) {
    int i;

    printf("Data setelah diurutkan = \n");
    for (i=0; i < jumlah; i++) {
        printf("data ke-%d = %g\n", i+1, x[i]);
    }
}