#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    char name[15];

    printf("Masukkan nama anda : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Halo %s, selamat belajar string\n", name);
    puts(name);
}
