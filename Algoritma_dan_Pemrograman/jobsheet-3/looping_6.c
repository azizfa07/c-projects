#include <stdio.h>

int main () {
    int X;
    for (X = 1; X <= 9; X++) {
        if (X==6)
            continue;
        printf("%d\n", X);
    }
}