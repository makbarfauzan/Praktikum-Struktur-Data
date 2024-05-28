// created by 23343075_muhamad akbar fauzan
// js 03 T 01.c
// Tampilkan bilangan Fibonaci pertama sampai ke-n menggunakan Pointer dengan Malloc

#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk menghasilkan deret Fibonacci
int* fibonacci(int n) {
    int *fib_series = (int*)malloc(n * sizeof(int)); // Membuat array untuk menyimpan deret Fibonacci
    if (fib_series == NULL) { // Memeriksa apakah alokasi memori berhasil
        printf("Alokasi memori gagal!");
        exit(1);
    }
    
    fib_series[0] = 0; // Bilangan Fibonacci pertama
    fib_series[1] = 1; // Bilangan Fibonacci kedua
    
    // Menghasilkan deret Fibonacci sampai n
    for (int i = 2; i < n; i++) {
        fib_series[i] = fib_series[i-1] + fib_series[i-2];
    }
    
    return fib_series; // Mengembalikan pointer ke array deret Fibonacci
}

int main() {
    int n;
    
    printf("created by 23343075_muhamad akbar fauzan\n\n");
    
    printf("Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: ");
    scanf("%d", &n);
    
    // Memanggil fungsi untuk mendapatkan deret Fibonacci
    int *fib_series = fibonacci(n);
    
    // Menampilkan deret Fibonacci
    printf("Deret Fibonacci ke 1 sampai ke %d :\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib_series[i]);
    }
    printf("\n");
    
    // Membebaskan memori yang dialokasikan untuk array deret Fibonacci
    free(fib_series);
    
    return 0;
}
