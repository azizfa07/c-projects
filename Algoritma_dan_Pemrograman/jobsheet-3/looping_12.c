#include <stdio.h>

int main () {
    float C=0, R, F;

    printf("   CELSIUS    REAMUR   FAHRENHEIT\n");
    printf("\n====================================");
    do {
        R=C*4/5;
        F= C*9/5+32;
        printf("\n %8.2f %8.2f %8.2f", C, R, F);
        C+=10;
    } while (C<=100);
}