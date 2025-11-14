#include <stdio.h>
#include <string.h>

int main () {
    char name[15];
    printf("Masukkan nama anda : ");

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Halo %s, selamat belajar string\n", name);
}