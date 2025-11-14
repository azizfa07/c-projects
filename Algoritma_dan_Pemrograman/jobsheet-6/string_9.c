#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    int bil;
    char x[10];
    printf("Input sebuah bilangan bulat : ");
    fgets(x, sizeof(x), stdin);
    x[strlen(x) - 1] = '\0';

    bil = atoi(x);
    printf("Bilangan tersebut adalah : %d\n", bil);
    printf("Bilangan + 10            : %d\n", bil + 10);
}
