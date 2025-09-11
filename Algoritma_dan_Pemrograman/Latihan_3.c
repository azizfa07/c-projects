#include <stdio.h>

int main()
{
    printf("Latihan 3\n\n");

    /* Luas dan keliling persegi */

    // float p = 10, l = 5, Luas, Kel;

    // Luas = p*l;
    // Kel = 2*(p+l);

    // printf("Dengan panjang %.0f m dan lebar %.0f m, maka:\n", p, l);
    // printf("Luas keliling persegi panjang: %.0f meter persegi\n", Luas);
    // printf("Keliling persegi panjang: %.0f meter\n\n", Kel);

    /* Luas dan keliling lingkaran */

    // float phi = 3.14, r = 7, Luas, Kel;

    // Luas = phi*r*r;
    // Kel = 2*phi*r;

    // printf("Dengan phi %.0f dan jari-jari %.0f, maka:\n", phi, r);
    // printf("Luas lingkarannya adalah, %.0f\n", Luas);
    // printf("Keliling lingkarannya adalah, %.0f\n", Kel);

    /* Luas dan keliling segitiga */

    float alas = 4, tinggi = 7, Luas, Kel;

    Luas = (alas*tinggi) / 2;
    Kel = 3*alas; 

    printf("Dengan alas %.0f m dan tinggi %.0f m, maka\n", alas, tinggi);
    printf("Luas segitiganya adalah, %.0f m persegi\n", Luas);
    printf("Keliling segitiganya adalah, %.0f m\n", Kel);
 
    return 0;
}