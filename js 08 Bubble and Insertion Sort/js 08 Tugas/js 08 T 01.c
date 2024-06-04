// js 08 T 01.c
// created by 23343075_muhamad akbar fauzan
// program mengurutkan array dengna Bubble and Insertion Sort

#include <stdio.h>

// Fungsi untuk menampilkan array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar elemen
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Insertion Sort
void insertionSort(int arr[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        // Pindahkan elemen yang lebih besar dari key ke posisi satu di depannya
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array sebelum diurutkan:\n");
    printArray(arr, size);

    printf("\nMenggunakan Bubble Sort:\n");
    bubbleSort(arr, size);
    printArray(arr, size);

    printf("\nMenggunakan Insertion Sort:\n");
    insertionSort(arr, size);
    printArray(arr, size);

    return 0;
}
