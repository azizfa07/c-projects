#include <stdio.h>

int main() {

    int pilih;
    float panjang, lebar, jari2, sisi, alas, tinggi, keliling, luas;
    char satuan [10];

    int phi = 22/7;

    printf("Luas dan Keliling\n");
    printf("[1] Lingkaran\n");
    printf("[2] Persegi panjang\n");
    printf("[3] Segitiga sama sisi\n");
    printf("Masukkan angka dari pilihan yang tersedia: ");
    scanf("%d", &pilih);

    printf("\n");

    switch (pilih) {
        case 1:
            printf("Luas dan Keliling Lingkaran\n");
            printf("Masukkan panjang jari-jari: ");
            scanf("%f", &jari2);
            printf("Masukkan satuan           : ");
            scanf("%s", satuan);

            printf("\n");

            luas = phi * jari2 * jari2;
            keliling = 2 * phi * jari2;

            printf("Luas Lingkaran adalah     : %.2f %s²\n", luas, satuan);
            printf("Keliling Lingkaran adalah : %.2f %s\n", keliling, satuan);
            break;
        case 2:
            printf("Luas dan Keliling Persegi Panjang\n");
            printf("Masukkan besaran panjang            : ");
            scanf("%f", &panjang);
            printf("Masukkan besaran lebar              : ");
            scanf("%f", &lebar);
            printf("Masukkan satuan                     : ");
            scanf("%s", satuan);

            printf("\n");

            luas = panjang * lebar;
            keliling = 2 * (panjang + lebar);

            printf("Luas Persegi Panjang adalah         : %.2f %s²\n", luas, satuan);
            printf("Keliling Persegi Panjang adalah     : %.2f %s\n", keliling, satuan);
            break;
        case 3:
            printf("Luas dan Keliling Segitiga sama sisi\n");
            printf("Masukkan besaran alas             : ");
            scanf("%f", &alas);
            printf("Masukkan besaran sisi             : ");
            scanf("%f", &sisi);
            printf("Masukkan satuan                   : ");
            scanf("%s", satuan);

            tinggi = sisi * (1.73205 / 2.0);
            luas = 0.5 * alas * tinggi;
            keliling = 3 * sisi;

            printf("Luas segitiga sama sisi adalah         : %.2f %s²\n", luas, satuan);
            printf("Keliling segitiga sama sisi adalah     : %.2f %s\n", keliling, satuan);
        default: {
            printf("Jalankan program kembali untuk menghitung luas dan keliling suatu banngun datar :)\n");
        }
    }
}
