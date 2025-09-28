#include <stdio.h>

int main () {
    char pilihan;
    int sub_pilihan; // Variabel untuk submenu

    printf("Apa tujuanmu masuk Polines? 🤔\n");
    printf("[A] Cepat dapat kerja\n");
    printf("[B] Mendapatkan banyak relasi\n");
    printf("[C] Keduanya?\n");
    printf("Pilih opsimu: ");
    scanf(" %c", &pilihan);

    printf("\n============================================\n");

    switch (pilihan) {

        case 'a':
        case 'A':
            printf("Tujuan yang sangat bagus! Lulusan politeknik memang disiapkan untuk siap kerja. 👍\n");

            printf("\nLalu, bagaimana caramu untuk mencapainya?\n");
            printf("[1] Belajar dengan giat agar dapat IPK tinggi\n");
            printf("[2] Aktif dalam kegiatan penunjang skill (proyek, magang, dll)\n");
            printf("[3] Keduanya, dong!\n");
            printf("Pilih rencanamu: ");
            scanf("%d", &sub_pilihan);

            switch(sub_pilihan) {
                case 1:
                    printf("\nSip! IPK yang baik adalah kunci awal yang dilihat perusahaan. Semangat!\n");
                    break;
                case 2:
                    printf("\nKeren! Pengalaman dan portofolio adalah pembeda utama saat melamar kerja. Terus kembangkan!\n");
                    break;
                case 3:
                    printf("\nLuar biasa! Kombinasi IPK tinggi dan skill yang mumpuni akan membuatmu jadi kandidat idaman. Good luck!\n");
                    break;
                default:
                    printf("\nPilihan tidak valid, tapi semoga rencanamu tetap yang terbaik!\n");
                    break;
            }
            break;

        case 'b':
        case 'B':
            printf("Pilihan yang cerdas! 💡 Jaringan atau relasi yang luas akan membuka banyak pintu kesempatan di masa depan.\n");
            printf("Jangan lupa untuk aktif di organisasi atau kegiatan kampus, ya!\n");
            break;

        case 'c':
        case 'C':
            printf("Ambisius dan strategis! 🚀 Memadukan kesiapan kerja dengan jaringan yang kuat adalah resep sukses.\n");
            printf("Semoga kedua tujuanmu tercapai dengan gemilang di Polines!\n");
            break;
        default:
            printf("Pilihanmu tidak ada di daftar. Tapi apapun tujuanmu, semoga sukses selalu!\n");
            break;
    }

    printf("============================================\n");

    return 0;
}