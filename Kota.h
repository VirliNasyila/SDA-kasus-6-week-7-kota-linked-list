#ifndef KOTA_H
#define KOTA_H

#include "linked.h"

// Struktur untuk node kota
typedef struct {
    char namaKota[50];  // Untuk menyimpan nama kota (bentuk string)
    LinkedList daftarNama;  // linked list buat nyimpen nama nama orang di kota 
    struct KotaNode *next;  // Pointer ke kota berikutnya dalam list 
} KotaNode;

// Struktur untuk Linked List kota
typedef struct {
	KotaNode *head;
} ListKota;

// fungsi
void inisialisasiKota(ListKota *LK); // Inisialisasi list kota 
void tambahKota(ListKota *LK, char nama[]);  // Menambahkan kota baru ke list
void hapusKota(ListKota *LK, char nama[]);  // Menghapus kota dan seluruh daftar nama orang di dalamnya
void tampilkanDataSemuaKota(ListKota LK);  // Menampilkan semua kota dan daftar nama orangnya
void tampilkanDataPerKota(ListKota LK, char nama[]);  // Menampilkan daftar nama orang di satu kota tertentu 
KotaNode* cariKota(ListKota LK, char nama[]);  // Mencari node kota berdasarkan nama kota

#endif
