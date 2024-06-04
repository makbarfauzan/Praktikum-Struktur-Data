// js 10 T 01_Shell Sort.c
// created by 23343075_muhamad akbar fauzan
// Contoh Shell Sort

#include <stdio.h>

// Fungsi untuk melakukan Shell Sort
void shellSort(int arr[], int n) {
    // Mulai dengan selisih besar, kemudian kurangi selisihnya
    for (int selisih = n / 2; selisih > 0; selisih /= 2) {
        // Lakukan insertion sort dengan selisih ini.
        // Bagian pertama arr[0..selisih-1] sudah dalam urutan
        // tambahkan satu elemen lagi hingga seluruh array terurut dengan selisih ini
        for (int i = selisih; i < n; i += 1) {
            // tambahkan arr[i] ke elemen yang sudah diurutkan dengan selisih ini
            // simpan arr[i] di temp dan buat lubang di posisi i
            int temp = arr[i];
            // geser elemen yang sudah diurutkan dengan selisih ke atas sampai lokasi yang benar untuk arr[i] ditemukan
            int j;
            for (j = i; j >= selisih && arr[j - selisih] > temp; j -= selisih)
                arr[j] = arr[j - selisih];
            // letakkan temp (arr[i] asli) di lokasi yang benar
            arr[j] = temp;
        }
    }
}

int main() {
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Array sebelum sorting: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    shellSort(arr, n);

    printf("Array setelah sorting: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
