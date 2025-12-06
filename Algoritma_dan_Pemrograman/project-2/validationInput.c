#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "validationInput.h" // WAJIB: Include headernya sendiri

const char *VALID_CLASSES[] = {
    "1-A", "1-B",
    "2-A", "2-B",
    "3-A", "3-B",
    "4-A", "4-B",
    "5-A", "5-B",
    "6-A", "6-B"
};
const int TOTAL_CLASSES = 12;

void getValidClass(char *prompt, char *outputBuffer) {
    char input[10];
    int isValid = 0;

    do {
        printf("%s", prompt);
        scanf("%s", input);

        for (int i = 0; i < TOTAL_CLASSES; i++) {
            if (strcmp(input, VALID_CLASSES[i]) == 0) {
                isValid = 1;
                strcpy(outputBuffer, input);
                break;
            }
        }

        if (isValid == 0) {
            printf("\033[1;31m[!] Error: Kelas tidak valid! (Gunakan format kapital, misal: 1-A)\033[0m\n");
            printf("Opsi tersedia: [ ");
            for(int i=0; i<TOTAL_CLASSES; i++) printf("%s ", VALID_CLASSES[i]);
            printf("]\n");
        }

    } while (isValid == 0);
}

int getValidInt(char *prompt) {
    int number;
    int status;
    char buffer;

    do {
        printf("%s", prompt);
        status = scanf("%d", &number);

        if (status == 1) {
            buffer = getchar();
            if (buffer == '\n') {
                return number;
            } else {
                printf("Error: Masukkan angka saja tanpa huruf!\n");
                while (buffer != '\n') buffer = getchar();
            }
        }
        else {
            printf("Error: Input bukan angka!\n");
            while (getchar() != '\n');
        }
    } while (1);
}

void getValidName(char *prompt, char *outputBuffer) {
    int isValid;
    char temp[100];

    do {
        isValid = 1;

        printf("%s", prompt);
        scanf(" %[^\n]", temp);

        for (int i = 0; temp[i] != '\0'; i++) {
            if (!isalpha(temp[i]) && temp[i] != ' ') {
                isValid = 0;
                break;
            }
        }

        if (isValid == 0) {
            printf("Error: Nama hanya boleh berisi huruf dan spasi!\n");
        } else {
            strcpy(outputBuffer, temp);
        }

        while(getchar() != '\n');

    } while (isValid == 0);
}

