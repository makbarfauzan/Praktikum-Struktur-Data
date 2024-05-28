// js 05 T 01.c
// created by 23343075_muhamad akbar fauzan
// perpustakaan (judul, nama pengarang, tahun).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk node dalam double linked list
typedef struct Node {
    char judul[100];
    char pengarang[100];
    int tahun;
    struct Node* prev;
    struct Node* next;
} Node;

// Fungsi untuk membuat node baru
Node* createNode(char judul[], char pengarang[], int tahun) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->judul, judul);
    strcpy(newNode->pengarang, pengarang);
    newNode->tahun = tahun;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Fungsi untuk menambahkan node baru di awal linked list
void tambahAwal(Node** head, char judul[], char pengarang[], int tahun) {
    Node* newNode = createNode(judul, pengarang, tahun);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

// Fungsi untuk menambahkan node baru di akhir linked list
void tambahAkhir(Node** head, char judul[], char pengarang[], int tahun) {
    Node* newNode = createNode(judul, pengarang, tahun);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Fungsi untuk menghapus node berdasarkan judul buku
void hapusBerdasarkanJudul(Node** head, char judul[]) {
    if (*head == NULL) {
        printf("Linked list kosong.\n");
        return;
    }

    Node* temp = *head;
    while (temp != NULL) {
        if (strcmp(temp->judul, judul) == 0) {
            if (temp->prev == NULL) {
                *head = temp->next;
            } else {
                temp->prev->next = temp->next;
            }
            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            }
            free(temp);
            printf("Buku dengan judul '%s' telah dihapus.\n", judul);
            return;
        }
        temp = temp->next;
    }
    printf("Buku dengan judul '%s' tidak ditemukan.\n", judul);
}

// Fungsi untuk mencetak semua node dalam linked list
void cetak(Node* head) {
    if (head == NULL) {
        printf("Linked list kosong.\n");
        return;
    }

    printf("Daftar Buku dalam Perpustakaan:\n");
    while (head != NULL) {
        printf("Judul: %s, Pengarang: %s, Tahun: %d\n", head->judul, head->pengarang, head->tahun);
        head = head->next;
    }
}

// Fungsi utama
int main() {
    Node* head = NULL;

    // Contoh penambahan buku
    tambahAwal(&head, "Harry Potter dan Batu Bertuah", "J.K. Rowling", 1997);
    tambahAkhir(&head, "Lord of the Rings: Fellowship of the Ring", "J.R.R. Tolkien", 1954);
    tambahAkhir(&head, "To Kill a Mockingbird", "Harper Lee", 1960);
    tambahAkhir(&head, "1984", "George Orwell", 1949);

    // Contoh penghapusan buku
    hapusBerdasarkanJudul(&head, "To Kill a Mockingbird");

    // Cetak daftar buku
    cetak(head);

    // Bersihkan memori
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
