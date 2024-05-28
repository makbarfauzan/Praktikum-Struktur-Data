// js 05 T 02.c
// created by 23343075_muhamad akbar fauzan
// antrian mobil yang ada pada sebuah perparkiran

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisi struktur data untuk node dalam linked list
struct Node {
    char no_plat[20];
    char merk_mobil[50];
    char nama_pemilik[50];
    struct Node* prev;
    struct Node* next;
};

// Fungsi untuk membuat node baru
struct Node* createNode(char no_plat[], char merk_mobil[], char nama_pemilik[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->no_plat, no_plat);
    strcpy(newNode->merk_mobil, merk_mobil);
    strcpy(newNode->nama_pemilik, nama_pemilik);
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Fungsi untuk menambahkan mobil ke dalam antrian
void enqueue(struct Node** head_ref, char no_plat[], char merk_mobil[], char nama_pemilik[]) {
    struct Node* newNode = createNode(no_plat, merk_mobil, nama_pemilik);
    if (*head_ref == NULL) {
        *head_ref = newNode;
    } else {
        struct Node* temp = *head_ref;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Fungsi untuk menghapus mobil dari antrian berdasarkan nomor plat
void dequeue(struct Node** head_ref, char no_plat[]) {
    if (*head_ref == NULL) {
        printf("Antrian kosong\n");
        return;
    }
    struct Node* temp = *head_ref;
    while (temp != NULL) {
        if (strcmp(temp->no_plat, no_plat) == 0) {
            if (temp->prev == NULL) {
                *head_ref = temp->next;
            } else {
                temp->prev->next = temp->next;
            }
            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            }
            free(temp);
            printf("Mobil dengan nomor plat %s telah dikeluarkan dari antrian\n", no_plat);
            return;
        }
        temp = temp->next;
    }
    printf("Mobil dengan nomor plat %s tidak ditemukan dalam antrian\n", no_plat);
}

// Fungsi untuk menampilkan antrian mobil
void displayQueue(struct Node* head) {
    if (head == NULL) {
        printf("Antrian kosong\n");
        return;
    }
    struct Node* temp = head;
    printf("Antrian mobil:\n");
    while (temp != NULL) {
        printf("No. Plat: %s, Merk: %s, Nama Pemilik: %s\n", temp->no_plat, temp->merk_mobil, temp->nama_pemilik);
        temp = temp->next;
    }
}

int main() {
    struct Node* head = NULL;

    enqueue(&head, "B 1234 CD", "Toyota", "Andi");
    enqueue(&head, "B 5678 EF", "Honda", "Budi");
    enqueue(&head, "B 9876 GH", "Suzuki", "Cindy");

    displayQueue(head);

    dequeue(&head, "B 5678 EF");

    displayQueue(head);

    dequeue(&head, "B 1234 CD");
    dequeue(&head, "B 9876 GH");

    displayQueue(head);

    return 0;
}
