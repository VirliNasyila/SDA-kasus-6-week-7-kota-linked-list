#include "kota.h"

void inisialisasiKota(ListKota *LK) {
    LK->head = NULL;
}

void tambahKota(ListKota *LK, char nama[]) {
    KotaNode *newNode = (KotaNode*)malloc(sizeof(KotaNode));
    if (newNode) {
        strcpy(newNode->namaKota, nama);
        createList(&newNode->daftarNama);
        newNode->next = LK->head;
        LK->head = newNode;
    }
}

void hapusKota(ListKota *LK, char nama[]) {
    KotaNode *temp = LK->head, *prev = NULL;
    while (temp != NULL && strcmp(temp->namaKota, nama) != 0) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Kota tidak ditemukan.\n");
        return;
    }

    // Menghapus semua nama dari daftarNama kota 
    while (temp->daftarNama.head != NULL) {
        deleteFirst(&temp->daftarNama);
    }

    // Menghapus node kota
    if (prev == NULL) {
        LK->head = temp->next;
    } else {
        prev->next = temp->next;
    }
    free(temp);
}

KotaNode* cariKota(ListKota LK, char nama[]) {
    KotaNode *temp = LK.head;
    while (temp != NULL) {
        if (strcmp(temp->namaKota, nama) == 0)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

void tampilkanDataSemuaKota(ListKota LK) {
    KotaNode *temp = LK.head;
    while (temp != NULL) {
        printf("Kota: %s\n", temp->namaKota);
        printList(temp->daftarNama);
        printf("\n");
        temp = temp->next;
    }
}

void tampilkanDataPerKota(ListKota LK, char nama[]) {
    KotaNode *kota = cariKota(LK, nama);
    if (kota != NULL) {
        printf("Kota: %s\n", kota->namaKota);
        printList(kota->daftarNama);
    } else {
        printf("Kota tidak ditemukan.\n");
    }
}
