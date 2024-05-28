// js 06 T 01.c
// created by 23343075_muhamad akbar fauzan
// program stack yang berfungsi untuk menyimpan data nilai mahasiswa

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Struktur data mahasiswa
struct Mahasiswa {
    char nim[20];
    char nama[50];
    float nilai;
};

// Struktur stack
struct Stack {
    int top;
    struct Mahasiswa data[MAX];
};

// Fungsi untuk membuat stack baru
struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    return stack;
}

// Fungsi untuk mengecek apakah stack kosong
int isEmpty(struct Stack* stack) {
    return (stack->top == -1);
}

// Fungsi untuk mengecek apakah stack penuh
int isFull(struct Stack* stack) {
    return (stack->top == MAX - 1);
}

// Fungsi untuk menambahkan data ke dalam stack (push)
void push(struct Stack* stack, struct Mahasiswa mhs) {
    if (isFull(stack)) {
        printf("Stack penuh. Tidak dapat menambah data.\n");
        return;
    }
    stack->data[++stack->top] = mhs;
    printf("Data berhasil ditambahkan ke stack.\n");
}

// Fungsi untuk menghapus data dari stack (pop)
void pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack kosong. Tidak ada data untuk dihapus.\n");
        return;
    }
    printf("Data yang dihapus: %s - %s - %.2f\n", stack->data[stack->top].nim,
           stack->data[stack->top].nama, stack->data[stack->top].nilai);
    stack->top--;
}

// Fungsi untuk menampilkan isi stack
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack kosong. Tidak ada data untuk ditampilkan.\n");
        return;
    }
    printf("Isi stack:\n");
    for (int i = stack->top; i >= 0; i--) {
        printf("%s - %s - %.2f\n", stack->data[i].nim, stack->data[i].nama, stack->data[i].nilai);
    }
}

// Fungsi untuk membandingkan dua mahasiswa (digunakan dalam sorting)
int compareMahasiswa(const void* a, const void* b) {
    return (*(struct Mahasiswa*)b).nilai - (*(struct Mahasiswa*)a).nilai;
}

// Fungsi untuk melakukan sorting terhadap data mahasiswa di dalam stack
void sortStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack kosong. Tidak ada data untuk diurutkan.\n");
        return;
    }
    qsort(stack->data, stack->top + 1, sizeof(struct Mahasiswa), compareMahasiswa);
    printf("Data di stack berhasil diurutkan secara descending berdasarkan nilai.\n");
}

int main() {
    struct Stack* stack = createStack();
    int choice;
    struct Mahasiswa mhs;

    do {
        printf("\nMenu:\n");
        printf("1. Push (Tambah data)\n");
        printf("2. Pop (Hapus data)\n");
        printf("3. Display (Tampilkan data)\n");
        printf("4. Sorting (Urutkan data berdasarkan nilai)\n");
        printf("5. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Masukkan NIM: ");
                scanf("%s", mhs.nim);
                printf("Masukkan Nama: ");
                scanf("%s", mhs.nama);
                printf("Masukkan Nilai: ");
                scanf("%f", &mhs.nilai);
                push(stack, mhs);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                display(stack);
                break;
            case 4:
                sortStack(stack);
                break;
            case 5:
                printf("Program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (choice != 5);

    free(stack);
    return 0;
}
