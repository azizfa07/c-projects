#include  <stdio.h>

int main () {
    printf("Properti Rumah\n\n");

    float luas_tanah, luas_bangunan, harga_satuan_tanah, harga_satuan_bangunan, harga_tanah, harga_bangunan, harga_total;
    char tipe;

    printf("Masukkan luas tanah (meter)        : ");
    scanf("%f", &luas_tanah);
    printf("Masukkan luas bangunan (meter)     : ");
    scanf("%f", &luas_bangunan);
    printf("Pilih tipe rumah (A atau B)        : ");
    scanf(" %c", &tipe);

    printf("\n");

    if (tipe == 'A' || tipe == 'a') {
        harga_satuan_tanah = 40000;
        harga_satuan_bangunan = 150000;
    } else if (tipe == 'B' || tipe == 'b') {
        harga_satuan_tanah = 50000;
        harga_satuan_bangunan    = 200000;
    } else {
        printf("pilihan anda tidak ada dalam daftar");
        return 1;
    }

    harga_tanah     = harga_satuan_tanah * luas_tanah;
    harga_bangunan  = harga_satuan_bangunan * luas_bangunan;
    harga_total     = harga_tanah + harga_bangunan;

    printf("Tipe rumah                         : %c\n", tipe);
    printf("Harga tanah sebesar                : Rp. %.2f\n", harga_tanah);
    printf("Harga bangunan sebesar             : Rp. %.2f\n", harga_bangunan);
    printf("Total harga sebesar                : Rp. %.2f\n", harga_total);

    return 0;
}