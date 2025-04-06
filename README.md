Pada kasus ke 6 ini merupakan perkembangan dari kasus 5, yaitu di program ini menggunakan linked list sepenuhnya tanpa ada nya array sebagai penyimpan data utama.
Dan program ini sudah mendukung untuk penginputan nama kota dan nama sesorang semua nya sudah unlimited.

Struktur data yang digunakan ini adalah nested linked list:
1. Linked list pertama menyimpan daftar kota (KodaNode), yang saling terhubung dengan pointer next nya
2. Setiap kota nya punya linked list kedua (LinkedList daftarNama) untuk menyimpan nama - nama orang pada kota tersebut.
3. Untuk penambahan kota, nama seseorang, penghapusan serta pencarian secara dinamis menggunakan pointer dan alokasi memori(malloc, free) tanpa array statis (terkecuali pada input string nya).
