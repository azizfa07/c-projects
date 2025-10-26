#include <stdio.h>

int main () {
 printf("Menghitung Kuat Arus pada sebuah rangkaian\n");

 float I, V, R;

 printf("Masukkan tegangan: ");
 scanf("%f", &V);
 printf("Masukkan Resistansi / hambatan: ");
 scanf("%f", &R);

I = V / R;

 printf("Dengan tegangan sebesar %.2f a dan resistansi / hambatan sebesar %.2f ohm\n", V, R);
printf("Jadi, arus rangkaiannya adalah: %.2f\n", I);

}
