// created by 23343075_muhamad akbar fauzan
// js 02 T 01.c
// type data, input data, tampilkan data mahasiswa

#include <stdio.h>

#define MAX_MAHASISWA 100

// Definisikan struct untuk data mahasiswa
struct Mahasiswa {
    char nim[20];
    char nama[50];
    char tanggal_lahir[15];
    float ipk;
};

// Deklarasi fungsi input data mahasiswa
void inputDataMahasiswa(struct Mahasiswa mhs[], int jumlah);

// Deklarasi fungsi menampilkan data mahasiswa
void tampilkanDataMahasiswa(struct Mahasiswa mhs[], int jumlah);

int main() {
    struct Mahasiswa daftarMahasiswa[MAX_MAHASISWA];
    int jumlahMahasiswa;
    
    printf("created by 23343075_muhamad akbar fauzan\n\n");

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    // Input data mahasiswa
    inputDataMahasiswa(daftarMahasiswa, jumlahMahasiswa);

    // Tampilkan data mahasiswa
    printf("\nData Mahasiswa:\n");
    tampilkanDataMahasiswa(daftarMahasiswa, jumlahMahasiswa);

    return 0;
}

// Implementasi fungsi input data mahasiswa
void inputDataMahasiswa(struct Mahasiswa mhs[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        printf("\nMasukkan data untuk Mahasiswa %d:\n", i + 1);
        printf("NIM: ");
        scanf("%s", mhs[i].nim);
        printf("Nama: ");
        scanf("%s", mhs[i].nama);
        printf("Tanggal Lahir (dd/mm/yyyy): ");
        scanf("%s", mhs[i].tanggal_lahir);
        printf("IPK: ");
        scanf("%f", &mhs[i].ipk);
    }
}

// Implementasi fungsi menampilkan data mahasiswa
void tampilkanDataMahasiswa(struct Mahasiswa mhs[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        printf("\nData Mahasiswa %d:\n", i + 1);
        printf("NIM: %s\n", mhs[i].nim);
        printf("Nama: %s\n", mhs[i].nama);
        printf("Tanggal Lahir: %s\n", mhs[i].tanggal_lahir);
        printf("IPK: %.2f\n", mhs[i].ipk);
    }
}
