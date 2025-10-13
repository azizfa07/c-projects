#include <stdio.h>

int main() {
    int total = 0;
    for (int i = 10; i <= 100; i++) {
        total += i;
    }
    printf("Jumlah seluruh bilangan antara 10 sampai dengan 100 adalah: %d\n", total);

    return 0;
}