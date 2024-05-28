// js 06 T 02.c
// created by 23343075_muhamad akbar fauzan
// program sederhana pembalik kata dengan menggunakan stack

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PANJANG 100

// Struktur stack
struct Stack {
    int atas;
    unsigned kapasitas;
    char* array;
};

// Fungsi untuk membuat stack baru
struct Stack* buatStack(unsigned kapasitas) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->kapasitas = kapasitas;
    stack->atas = -1;
    stack->array = (char*)malloc(stack->kapasitas * sizeof(char));
    return stack;
}

// Fungsi untuk mengecek apakah stack penuh
int penuh(struct Stack* stack) {
    return stack->atas == stack->kapasitas - 1;
}

// Fungsi untuk mengecek apakah stack kosong
int kosong(struct Stack* stack) {
    return stack->atas == -1;
}

// Fungsi untuk menambahkan elemen ke dalam stack
void masukkan(struct Stack* stack, char item) {
    if (penuh(stack))
        return;
    stack->array[++stack->atas] = item;
}

// Fungsi untuk menghapus elemen dari stack
char keluarkan(struct Stack* stack) {
    if (kosong(stack))
        return '\0';
    return stack->array[stack->atas--];
}

// Fungsi untuk membalikkan kata menggunakan stack
void balikKata(char* kata) {
    int panjang = strlen(kata);
    struct Stack* stack = buatStack(panjang);

    // Masukkan karakter ke dalam stack
    for (int i = 0; i < panjang; i++)
        masukkan(stack, kata[i]);

    // Keluarkan karakter dari stack untuk membalikkan kata
    for (int i = 0; i < panjang; i++)
        kata[i] = keluarkan(stack);
}

int main() {
    int pilihan;
    char kata[MAX_PANJANG];

    do {
        printf("Menu:\n");
        printf("1) Masukkan Kata\n");
        printf("2) Balik Kata\n");
        printf("3) Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Masukkan kata: ");
                scanf("%s", kata);
                break;
            case 2:
                balikKata(kata);
                printf("Kata setelah dibalik: %s\n", kata);
                break;
            case 3:
                printf("Terima kasih, program selesai.\n");
                break;
            default:
                printf("Menu tidak valid. Silakan pilih lagi.\n");
        }
    } while (pilihan != 3);

    return 0;
}
