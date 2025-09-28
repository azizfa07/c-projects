#include <stdio.h>

float hambatan_rangkaian_seri(float hambatan_1, float hambatan_2, float hambatan_3) {
    float total_hambatan_seri = hambatan_1 + hambatan_2 + hambatan_3;
    return total_hambatan_seri;
};

float hambatan_rangkaian_paralel(float hambatan_1, float hambatan_2, float hambatan_3) {
    float total_hambatan_paralel = ( 1 / hambatan_1 ) * ( 1 / hambatan_2 ) * ( 1 / hambatan_3);
    return total_hambatan_paralel;
};

struct konversi_suhu {
    float celcius;
    float fahrenheit;
    float kelvin;
    float reamur;
};

struct konversi_mata_uang {
    float rupiah;
    float dinar_kuwait;
    float euro;
    float usd;
};

struct konversi_suhu konversi_dari_celcius(float konversi_celcius) {;
    struct konversi_suhu hasil_celcius;
    hasil_celcius.fahrenheit = (9.0 / 5.0 * konversi_celcius) + 32.0;
    hasil_celcius.kelvin = konversi_celcius + 273.15;
    hasil_celcius.reamur = 4.0 / 5.0 * konversi_celcius;
    return hasil_celcius;
};

struct konversi_suhu konversi_dari_fahrenheit(float konversi_fahrenheit) {
    struct konversi_suhu hasil_fahrenheit;
    hasil_fahrenheit.celcius = 5.0 / 9.0 * (konversi_fahrenheit - 32.0);
    hasil_fahrenheit.kelvin = 5.0 / 9.0 * (konversi_fahrenheit - 32.0) + 273.15;
    hasil_fahrenheit.reamur = 4.0 / 9.0 * (konversi_fahrenheit - 32.0);
    return hasil_fahrenheit;
};

struct konversi_suhu konversi_dari_kelvin(float konversi_kelvin) {
    struct konversi_suhu hasil_kelvin;
    hasil_kelvin.celcius = konversi_kelvin - 273.15;
    hasil_kelvin.fahrenheit = 9.0 / 5.0 * (konversi_kelvin - 273.15) + 32.0;
    hasil_kelvin.reamur = 4.0 / 5.0 * (konversi_kelvin - 273.15);
    return hasil_kelvin;
}

struct konversi_suhu konversi_dari_reamur(float konversi_reamur) {
    struct konversi_suhu hasil_reamur;
    hasil_reamur.celcius = 5.0 / 4.0 * konversi_reamur;
    hasil_reamur.fahrenheit = 9.0 / 4.0 * konversi_reamur + 32.0;
    hasil_reamur.kelvin = 5.0 / 4.0 * konversi_reamur + 273.15;
    return hasil_reamur;
}

struct konversi_mata_uang konversi_dari_rupiah(float konversi_rupiah) {
    struct konversi_mata_uang hasil_rupiah;
    hasil_rupiah.dinar_kuwait = konversi_rupiah * 0.00001828;
    hasil_rupiah.euro = konversi_rupiah * 0.00005119;
    hasil_rupiah.usd = konversi_rupiah * 0.00005980;
    return hasil_rupiah;
}

int main() {
    int pilih_menu_utama = 0;
    int pilih_jenis_hambatan = 0;
    int pilih_jenis_suhu = 0;

    printf("Mini Tools\n\n");
    printf("Pilih program yang ingin dijalankan: \n");
    printf("[1] Menghitung total hambatan\n");
    printf("[2] Melakukan konversi suhu\n");
    printf("[3] Melakukan konversi mata uang\n");
    printf("Masukkan angka dari pilihan yang tersedia: ");
    scanf("%d", &pilih_menu_utama);

    switch (pilih_menu_utama) {
        case 1:
            printf("Pilih rangkaian yang digunakan: \n");
            printf("[1] Rangkaian Seri\n");
            printf("[2] Rangkaian Paralel\n");
            printf("Masukkan angka dari pilihan yang tersedia: ");
            scanf("%d", &pilih_jenis_hambatan);

            switch (pilih_jenis_hambatan) {
                case 1: {

                    float r1;
                    float r2;
                    float r3;

                    printf("Masukkan hambatan 1 (r1) : ");
                    scanf("%f", &r1);
                    printf("Masukkan hambatan 2 (r2) : ");
                    scanf("%f", &r2);
                    printf("Masukkan hambatan 3 (r3) : ");
                    scanf("%f", &r3);

                    float total_hambatan_paralel = hambatan_rangkaian_seri(r1, r2, r3);

                    printf("Total hambatan           : %.2f\n", total_hambatan_paralel);
                    break;
                }
                case 2: {

                    float r1;
                    float r2;
                    float r3;

                    printf("Masukkan hambatan 1 (r1) : ");
                    scanf("%f", &r1);
                    printf("Masukkan hambatan 2 (r2) : ");
                    scanf("%f", &r2);
                    printf("Masukkan hambatan 3 (r3) : ");
                    scanf("%f", &r3);

                    float total_hambatan_seri = hambatan_rangkaian_paralel(r1, r2, r3);

                    printf("\n");
                    printf("Total hambatan          : %.2f\n", total_hambatan_seri);
                    break;
                }
                default: {
                    printf("format tidak valid");
                }
            }
            break;
        case 2 : {
                float suhu;

                printf("Pilih Suhu awal yang ingin dikonversi: \n");
                printf("[1] Celcius\n");
                printf("[2] Fahrenheit\n");
                printf("[3] Kelvin\n");
                printf("[4] Reamur\n");
                printf("Masukkan angka dari pilihan yang tersedia: ");
                scanf("%d", &pilih_jenis_suhu);

                switch (pilih_jenis_suhu) {
                    case 1: {
                        printf("Masukkan besaran suhu celcius   : ");
                        scanf("%f", &suhu);

                        struct konversi_suhu hasil_celcius = konversi_dari_celcius(suhu);
                        printf("Hasil Konversi dari %.2f Celsius:\n", suhu);
                        printf("Fahrenheit: %.2f\n", hasil_celcius.fahrenheit);
                        printf("Kelvin    : %.2f\n", hasil_celcius.kelvin);
                        printf("Reamur    : %.2f\n", hasil_celcius.reamur);
                        break;
                    }
                    case 2: {
                        printf("Masukkan besaran suhu fahrenheit : ");
                        scanf("%f", &suhu);

                        struct konversi_suhu hasil_fahrenheit = konversi_dari_fahrenheit(suhu);
                        printf("Hasil Konversi dari %.2f Celcius:\n", suhu);
                        printf("Celcius   : %.2f\n", hasil_fahrenheit.celcius);
                        printf("Kelvin    : %.2f\n", hasil_fahrenheit.kelvin);
                        printf("Reamur    : %.2f\n", hasil_fahrenheit.reamur);
                        break;
                    }
                    case 3: {
                        printf("Masukkan besaran suhu kelvin     : ");
                        scanf("%f", &suhu);

                        struct konversi_suhu hasil_kelvin = konversi_dari_kelvin(suhu);
                        printf("Hasil dari %.2f kelvin:\n");
                        printf("Celcius   : %.2f\n", hasil_kelvin.celcius);
                        printf("Fahrenheit: %.2f\n", hasil_kelvin.fahrenheit);
                        printf("reamur    : %.2f\n", hasil_kelvin.reamur);
                        break;
                    }
                    case 4: {
                        printf("Masukkan besaran suhu reamur     : ");
                        scanf("%f", &suhu);

                        struct konversi_suhu hasil_reamur = konversi_dari_reamur(suhu);
                        printf("Hasil dari %.2f reamur:\n", suhu);
                        printf("Celcius   : %.2f\n", hasil_reamur.celcius);
                        printf("Fahrenheit: %.2f\n", hasil_reamur.fahrenheit);
                        printf("Kelvin    : %.2f\n", hasil_reamur.kelvin);
                        break;
                    }
                }
                default: {
                    printf("format tidak valid");
                }
                break;
        }
        case 3 : {
                float mata_uang;

                printf("Konversi nilai mata uang rupiah:\n");
                printf("Masukkan nominal uang rupiah (IDR) : ");
                scanf("%f", &mata_uang);

                struct konversi_mata_uang hasil_rupiah = konversi_dari_rupiah(mata_uang);
                printf("Hasil dari konversi Rp %.2f ke mata uang:\n", mata_uang);
                printf("Dinar Kuwait (KWD) : %.4f\n", hasil_rupiah.dinar_kuwait);
                printf("Euro (EUR)         : %.4f\n", hasil_rupiah.euro);
                printf("Dollar US (USD)    : %.4f\n", hasil_rupiah.usd);
            }
            break;
    }
};
