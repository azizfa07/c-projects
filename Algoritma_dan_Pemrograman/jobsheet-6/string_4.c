#include <stdio.h>
#include <string.h>

int main () {
    char name[15];

    printf("Masukkan nama anda : ");
    scanf("%s", name);

    printf("Halo %s, selamat belajar string\n", name);
    puts(name);
}
