#include <stdio.h>
#include <string.h>

int main () {
    char name[100];
    printf("Masukkan nama anda : ");

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("kata yang anda masukkan adalah %s memiliki jumlah karakter sebanyak %zu\n", name, strlen(name));
}