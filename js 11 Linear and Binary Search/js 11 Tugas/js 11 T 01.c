// js 11 T 01.c
// created by 23343075_muhamad akbar fauzan
// data mahasiswa metode sequential search dan binary search.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int NIM;
    char nama[50];
    char TTL[50];
    float IPK;
} Mahasiswa;

// Fungsi untuk menampilkan data mahasiswa
void tampilkanMahasiswa(Mahasiswa m) {
    printf("NIM: %d\n", m.NIM);
    printf("Nama: %s\n", m.nama);
    printf("TTL: %s\n", m.TTL);
    printf("IPK: %.2f\n", m.IPK);
}

// Fungsi untuk melakukan pencarian sequential search
int sequentialSearch(Mahasiswa mhs[], int n, int nim) {
    for (int i = 0; i < n; i++) {
        if (mhs[i].NIM == nim) {
            return i;
        }
    }
    return -1;
}

// Fungsi untuk melakukan pencarian binary search
int binarySearch(Mahasiswa mhs[], int n, int nim) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mhs[mid].NIM == nim) {
            return mid;
        }
        if (mhs[mid].NIM < nim) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

// Fungsi untuk membandingkan dua mahasiswa berdasarkan NIM (untuk sorting)
int compareNIM(const void *a, const void *b) {
    Mahasiswa *mhsA = (Mahasiswa *)a;
    Mahasiswa *mhsB = (Mahasiswa *)b;
    return mhsA->NIM - mhsB->NIM;
}

// Fungsi untuk menambah mahasiswa baru
void tambahMahasiswa(Mahasiswa **mhs, int *n) {
    *mhs = realloc(*mhs, (*n + 1) * sizeof(Mahasiswa));
    if (*mhs == NULL) {
        printf("Memori tidak cukup.\n");
        exit(1);
    }

    printf("Masukkan NIM: ");
    scanf("%d", &(*mhs)[*n].NIM);
    printf("Masukkan Nama: ");
    scanf(" %[^\n]", (*mhs)[*n].nama);
    printf("Masukkan TTL: ");
    scanf(" %[^\n]", (*mhs)[*n].TTL);
    printf("Masukkan IPK: ");
    scanf("%f", &(*mhs)[*n].IPK);

    (*n)++;
    qsort(*mhs, *n, sizeof(Mahasiswa), compareNIM);
}

int main() {
    Mahasiswa *mhs = NULL;
    int n = 0, pilihan, nim;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Tambah Mahasiswa\n");
        printf("2. Cari Mahasiswa\n");
        printf("3. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            tambahMahasiswa(&mhs, &n);
        } else if (pilihan == 2) {
            printf("Masukkan NIM yang ingin dicari: ");
            scanf("%d", &nim);

            printf("Pilih metode pencarian:\n1. Sequential Search\n2. Binary Search\nPilihan: ");
            int metode;
            scanf("%d", &metode);

            int index;
            if (metode == 1) {
                index = sequentialSearch(mhs, n, nim);
            } else if (metode == 2) {
                index = binarySearch(mhs, n, nim);
            } else {
                printf("Pilihan tidak valid.\n");
                continue;
            }

            if (index != -1) {
                printf("Data mahasiswa ditemukan:\n");
                tampilkanMahasiswa(mhs[index]);
            } else {
                printf("Data mahasiswa dengan NIM %d tidak ditemukan.\n", nim);
            }
        } else if (pilihan == 3) {
            break;
        } else {
            printf("Pilihan tidak valid.\n");
        }
    }

    free(mhs);
    return 0;
}
