// created by 23343075_muhamad akbar fauzan
// js 03 T 02.c
// Tampilkan bilangan Prima pertama sampai ke-n menggunakan Pointer dengan Malloc

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Fungsi untuk memeriksa apakah suatu bilangan prima
bool adalahPrima(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Fungsi untuk menghasilkan bilangan prima pertama sampai ke-n
int* hasilkanPrima(int n, int ukuranAwal) {
    int* prima = (int*)malloc(n * sizeof(int)); // Alokasi awal memori
    if (prima == NULL) {
        printf("Alokasi memori gagal!");
        exit(1);
    }

    int jumlah = 0; // Jumlah bilangan prima yang telah ditemukan
    int angka = 2;   // Angka pertama untuk diperiksa apakah prima

    while (jumlah < n) {
        if (adalahPrima(angka)) {
            prima[jumlah] = angka;
            jumlah++;

            // Mengecek apakah sudah mencapai batas alokasi memori, jika ya, alokasi memori baru
            if (jumlah == ukuranAwal) {
                ukuranAwal *= 2; // Melipatgandakan ukuran alokasi memori
                prima = (int*)realloc(prima, ukuranAwal * sizeof(int)); // Mengalokasikan memori baru
                if (prima == NULL) {
                    printf("Alokasi memori gagal!");
                    exit(1);
                }
            }
        }
        angka++;
    }

    return prima;
}

int main() {
    int n, ukuranAwal;
    
    printf("created by 23343075_muhamad akbar fauzan\n\n");

    printf("Masukkan jumlah bilangan prima yang ingin ditampilkan: ");
    scanf("%d", &n);

    printf("Masukkan ukuran alokasi awal memori: ");
    scanf("%d", &ukuranAwal);

    // Memanggil fungsi untuk menghasilkan bilangan prima
    int* bilanganPrima = hasilkanPrima(n, ukuranAwal);

    // Menampilkan bilangan prima
    printf("Bilangan prima pertama %d:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", bilanganPrima[i]);
    }
    printf("\n");

    // Membebaskan memori yang dialokasikan untuk bilangan prima
    free(bilanganPrima);

    return 0;
}
