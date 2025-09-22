#include <stdio.h>

int main () {
    printf("Konversi Suhu Celcius ke-Fahrenheit dan Reamur\n\n");

    float Celcius, Fahrenheit, Reamur;

    printf("Masukkan besaran Suhu Celcius       : ");
    scanf("%f", &Celcius);

    printf("\n");

    Fahrenheit = 9.0/5.0 * Celcius + 32;
    Reamur = 4.0/5.0 * Celcius;

    printf("Maka, hasil konversi Celcius ke Fahrenheit menjadi : %.2f °F\n", Fahrenheit);
    printf("dan Celcius ke Reamur Menjadi                      : %.2f °Re\n", Reamur);

    return 0;
}