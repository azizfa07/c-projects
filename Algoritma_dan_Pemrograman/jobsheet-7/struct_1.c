#include <stdio.h>
#include <string.h>

struct siswa {
    char nama[20];
    char alamat[20];
    int umur;
};


int main () {
    struct siswa siswa1;
    struct siswa siswa2;
    struct siswa siswa3;
    struct siswa siswa4;

    strcpy(siswa1.nama,"Cak Lontong");
    strcpy(siswa1.alamat,"Surabaya");
    siswa1.umur = 40;

    strcpy(siswa2.nama,"Entis Sutisna");
    strcpy(siswa2.alamat,"Bandung");
    siswa2.umur = 40;

    strcpy(siswa3.nama,"Nunung Srimulat");
    strcpy(siswa3.alamat,"Solo");
    siswa3.umur = 40;

    strcpy(siswa4.nama,"AYU TINGTING");
    strcpy(siswa4.alamat,"DEPOK");
    siswa4.umur = 40;

    printf("-----------------------------------------------------------------");
    printf("\nNAMA                    ALAMAT             UMUR ");
    printf("\n-----------------------------------------------------------------");

    printf("\n%10s %20s %12d", siswa1.nama, siswa1.alamat, siswa1.umur);
    printf("\n%10s %17s %13d", siswa2.nama, siswa2.alamat, siswa2.umur);
    printf("\n%10s %16s %15d\n", siswa4.nama, siswa4.alamat, siswa4.umur);
}