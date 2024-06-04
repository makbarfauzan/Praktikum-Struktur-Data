// js 10 T 01_Quick Sort.c
// created by 23343075_muhamad akbar fauzan
// Contoh Quick Sort

#include <stdio.h>

// Fungsi untuk menukar nilai dua variabel
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Fungsi untuk membagi array dan mengembalikan index pivot
int partition(int arr[], int rendah, int tinggi) {
    int pivot = arr[tinggi];    // pivot
    int i = (rendah - 1);  // Indeks elemen yang lebih kecil

    for (int j = rendah; j <= tinggi - 1; j++) {
        // Jika elemen saat ini lebih kecil dari pivot
        if (arr[j] < pivot) {
            i++;    // tingkatkan indeks elemen yang lebih kecil
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[tinggi]);
    return (i + 1);
}

// Fungsi untuk Quick Sort
void quickSort(int arr[], int rendah, int tinggi) {
    if (rendah < tinggi) {
        // pi adalah index pembagian, arr[p] saat ini ada di tempat yang benar
        int pi = partition(arr, rendah, tinggi);

        // Urutkan secara terpisah elemen sebelum pembagian dan setelah pembagian
        quickSort(arr, rendah, pi - 1);
        quickSort(arr, pi + 1, tinggi);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array sebelum sorting: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    quickSort(arr, 0, n - 1);

    printf("Array setelah sorting: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
