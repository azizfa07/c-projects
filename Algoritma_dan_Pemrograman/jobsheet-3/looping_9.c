#include <stdio.h>

int main () {
    int X;
    for (X=1; X<=9; X++) {
        if (X==6)
            break;
        printf("%d",X);
        printf("\n");
    }
}