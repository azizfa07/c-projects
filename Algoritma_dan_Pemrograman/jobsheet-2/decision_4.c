#include <stdio.h>

int main () {
    int menu;

    printf("pilihan menu hari ini : \n\n");
    printf("[1] Soto\n[2] Bakso\n");
    printf("\nPilihan anda ? ");
    scanf("%d",&menu);

    switch (menu) {
        case 1: printf("Anda telah memilih SOTO"); break;
        case 2: printf("Anda telah memilih BAKSO"); break;
    }

    printf("\n\n");
}