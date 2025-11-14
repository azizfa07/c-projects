#include <stdio.h>
#include <string.h>
#define MAKS 80

int main () {
    char str1[MAKS];
    char str2[] = "ABCDE";

    strcpy(str1, str2);
    printf("String pertama adalah : %s\n", str1);
    printf("string kedua adalah   : %s\n", str2);
}