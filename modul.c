#include <stdio.h>
#include <stdlib.h>

// Definisi struktur node
typedef struct Node {
    int info;
    struct Node *next;
} Node;

// Deklarasi pointer untuk linked list
Node *First = NULL;

// Fungsi untuk membuat node baru
Node* createNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode != NULL) {
        newNode->info = value;
        newNode->next = NULL;
    }
    return newNode;
}

// Fungsi untuk menampilkan elemen terakhir yang dimodifikasi
void printElement(int value) {
    printf("elemen List = {%d}\n", value);
}

// Insert First
void insertFirst(int value) {
    Node *newNode = createNode(value);
    if (newNode == NULL) {
        printf("Alokasi Memori Gagal!\n");
        return;
    }
    newNode->next = First;
    First = newNode;
    printElement(value);
}

// Insert Last
void insertLast(int value) {
    Node *newNode = createNode(value);
    if (newNode == NULL) {
        printf("Alokasi Memori Gagal!\n");
        return;
    }
    if (First == NULL) {
        First = newNode;
    } else {
        Node *temp = First;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printElement(value);
}

// Insert After
void insertAfter(int afterValue, int value) {
    Node *temp = First;
    while (temp != NULL && temp->info != afterValue) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Nilai %d tidak ditemukan dalam list!\n", afterValue);
        return;
    }
    Node *newNode = createNode(value);
    if (newNode == NULL) {
        printf("Alokasi Memori Gagal!\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    printElement(value);
}

// Delete First
void deleteFirst() {
    if (First == NULL) {
        printf("List kosong!\n");
        return;
    }
    Node *temp = First;
    int deletedValue = temp->info;
    First = First->next;
    free(temp);
    printElement(deletedValue);
}


// Delete All
void deleteAll() {
    while (First != NULL) {
        deleteFirst();
    }
    printf("List kosong!\n");
}

