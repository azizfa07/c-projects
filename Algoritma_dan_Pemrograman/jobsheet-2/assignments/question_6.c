#include <stdio.h>
#include <math.h>

int main() {
    int select;

    printf("Telecommunication Calculator Tools\n");
    printf("[1] Band-pass Filter\n");
    printf("[2] Insertion Loss\n");
    printf("[3] Ripple pass-band\n");
    printf("Select an option with number option:");
    scanf("%d", &select);

    switch (select) {
        case 1: {
            // Deklarasi variabel
            float f_L, f_H, bandwidth, f_c, q_factor;

            // --- Judul Program ---
            printf("===================================================\n");
            printf("   Kalkulator Parameter Dasar Band-Pass Filter     \n");
            printf("===================================================\n\n");

            // --- Meminta Input dari Pengguna ---
            printf("Masukkan Frekuensi Cut-off Bawah (f_L) dalam Hz: ");
            scanf("%f", &f_L);

            printf("Masukkan Frekuensi Cut-off Atas (f_H) dalam Hz : ");
            scanf("%f", &f_H);

            // --- Validasi Input Sederhana ---
            if (f_L >= f_H) {
                printf("\nError: f_L tidak boleh lebih besar atau sama dengan f_H.\n");
                return 1; // Keluar dari program karena error
            }

            // --- Proses Perhitungan ---
            // 1. Menghitung Bandwidth (Lebar Pita)
            bandwidth = f_H - f_L;

            // 2. Menghitung Frekuensi Tengah (Center Frequency)
            f_c = sqrt(f_L * f_H);

            // 3. Menghitung Faktor Kualitas (Q Factor)
            q_factor = f_c / bandwidth;

            // --- Menampilkan Hasil ---
            printf("\n------------------ HASIL PERHITUNGAN ------------------\n");
            printf("Frekuensi Tengah (f_c)                         : %.2f Hz\n", f_c);
            printf("Lebar Pita (Bandwidth)                         : %.2f Hz\n", bandwidth);
            printf("Faktor Kualitas (Q)                            : %.2f\n", q_factor);
            printf("-----------------------------------------------------\n");

            // Memberi label pada hasil Q Factor
            if (q_factor > 10) {
                printf("Keterangan: Filter ini sangat selektif (Bandwidth sempit).\n");
            } else {
                printf("Keterangan: Filter ini kurang selektif (Bandwidth lebar).\n");
            }
            break;
        }
        case 2: {
            float v_in, v_out, gain_db;

            printf("===================================================\n");
            printf("       Kalkulator Gain / Loss dalam Desibel (dB)      \n");
            printf("===================================================\n\n");

            printf("Masukkan Tegangan Input (Vin) dalam Volt  : ");
            scanf("%f", &v_in);

            printf("Masukkan Tegangan Output (Vout) dalam Volt: ");
            scanf("%f", &v_out);

            if (v_in <= 0) {
                printf("Error: Tegangan Input tidak boleh nol atau negatif.\n");
                return 1;
            }

            // Menghitung gain dalam dB
            gain_db = 20 * log10(v_out / v_in);

            printf("\n------------------ HASIL ------------------\n");
            printf("Hasil Perbandingan                        : %.4f dB\n", gain_db);

            if (gain_db < 0) {
                printf("Sinyal mengalami pelemahan (Loss) sebesar : %.2f dB.\n", -gain_db);
            } else if (gain_db > 0) {
                printf("Sinyal mengalami penguatan (Gain) sebesar : %.2f dB.\n", gain_db);
            } else {
                printf("Tidak ada perubahan level sinyal.\n");
            }
            printf("-------------------------------------------\n");
            break;
        }
        case 3: {
            float r_db, a_max, a_min;
            printf("===================================================\n");
            printf("       Kalkulator Ripple Passband Desibel (dB)      \n");
            printf("===================================================\n\n");


            printf("masukkan Amplitudo Max / A max   : ");
            scanf("%f", &a_max);

            do {
                printf("masukkan Amplitudo Min / A min   : ");
                scanf("%f", &a_min);
                if (a_min > a_max) {
                    printf("\n--- ERROR ---\n");
                    printf("Amplitudo min (%.2f) tidak boleh lebih besar atau sama dengan A max (%.2f).\n", a_min, a_max);
                    printf("Silakan coba lagi.\n\n");
                }
            } while (a_min >= a_max);

            r_db = a_max - a_min;

            printf("\n------------------ HASIL ------------------\n");
            printf("Hasil ripple pass band           : %.2f\n", r_db);
        }
        default: {
            printf("Select an option with number option:\n");
        }
    }
    return 0;
}
