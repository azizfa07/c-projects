#include <stdio.h>

int main () {
    float C, R, F;
    printf("   CELSIUS     REAMUR    FAHRENHEIT\n");
    for (C=0; C<=100; C+=10) {
        R = C*4/5;
        F = C*9/5+32;
        printf("%8.1f %10.1f %12.1f\n", C, R, F);
    }
}