#include <stdio.h>

int main() {
    int Bil;
    int num;
     for (Bil=1; Bil<=10; Bil++) {
         printf("%d\n", Bil);
     }
    Bil=0;
    while (Bil<=10) {
        printf("%d\n", Bil);
        Bil++;
    }
    num=0;
    do {
        printf("%d\n", num);
        num++;
    } while (num<=10);
}