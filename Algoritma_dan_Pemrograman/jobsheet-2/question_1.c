#include <stdio.h>

int main() {
    float harga_buku = 15000.0;
    float harga_pensil = 2500.0;
    float harga_pulpen = 3000.0;
    float special_school_toolset = 200000.0;
    float total_harga_barang = 0.0;
    int pilihan;

    printf("Daftar Barang yang Tersedia:\n");
    printf("[1] Buku (Rp %.2f)\n", harga_buku);
    printf("[2] Pensil (Rp %.2f)\n", harga_pensil);
    printf("[3] Pulpen (Rp %.2f)\n", harga_pulpen);
    printf("[4] Special school toolset (Rp %.2f)\n", special_school_toolset);
    printf("0. Selesai (untuk mengakhiri input)\n\n");

    do {
        printf("Masukkan nomor barang yang ingin dibeli (0 untuk selesai): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                total_harga_barang += harga_buku;
                printf("Buku ditambahkan. Total sementara: Rp %.2f\n", total_harga_barang);
                break;
            case 2:
                total_harga_barang += harga_pensil;
                printf("Pensil ditambahkan. Total sementara: Rp %.2f\n", total_harga_barang);
                break;
            case 3:
                total_harga_barang += harga_pulpen;
                printf("Pulpen ditambahkan. Total sementara: Rp %.2f\n", total_harga_barang);
                break;
            case 4:
                total_harga_barang += special_school_toolset;
                printf("special school toolset ditambahkan: Rp %.2f\n", total_harga_barang);
                break;
            case 0:
                printf("\n--- Selesai Memilih Barang ---\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 0);

    if (total_harga_barang >= 200000.0) {
        total_harga_barang = total_harga_barang - (total_harga_barang * 0.05);
    } else {
        return total_harga_barang;
    }

    printf("Total harga dari semua barang adalah: Rp %.2f\n", total_harga_barang);

    return 0;
}