/* -------------------------------------------
        Tugas Modul 5 - Percabangan Bertingkat
        Judul : Menentukan Harga Pakaian
   -------------------------------------------
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h> // Library toupper
#include<stdlib.h>

int main(){
    // Menampilkan pilihan daftar pakaian
    printf("============= Daftar Produk =============\n");
    printf(" A. Garam Himalaya 1 kg    \n");
    printf(" B. Gamis Lengan Panjang    \n");
    printf(" C. Minyak Kelapa Barco 5 liter   \n");
    printf("-----------------------------------------\n");

    // Deklarasi variabel
    // Input Produk
    char kodeProd;
    int jumlProd;
    // Output Produk
    int hrgSatu;
    int totHrg;
    int disk;
    int diskTamb;
    int totHrgAkh;

    // Membuat input
    printf("Pilih Produk (A/B/C)        : ");
    scanf("%c", &kodeProd);
    getchar();
    printf("Jumlah yang dibeli (1-10)   : ");
    scanf("%d", &jumlProd);
    getchar();

    // Cek harga produk
    printf("\n============ Cek Produk ============\n");
    switch (toupper(kodeProd))
    {
    case 'A':
        printf("Produk              : Garam Himalaya 1 kg \n");
        hrgSatu = 65000;
        if (jumlProd > 1 && (jumlProd == 2))
        {
            disk = 5000;
        } else if (jumlProd > 2 && (jumlProd == 3)) {
            disk = 7500;
        } else if (jumlProd > 3) {
            disk = 10000;
        } else {
            disk = 0;
        }
        break;
    case 'B':
        printf("Produk              : Gamis Lengan Panjang \n");
        hrgSatu = 130000;
        diskTamb = 25;
        if (jumlProd > 1 && (jumlProd == 2))
        {
            disk = hrgSatu * 7 / 100;
        } else if (jumlProd > 2) {
            disk = hrgSatu * 12 / 100;
        } else {
            disk = 0;
        }
        break;
    case 'C':
        printf("Produk              : Minyak Kelapa Barco 5 liter \n");
        hrgSatu = 84900;
        if (jumlProd >= 3)
        {
            disk = hrgSatu * 15 / 100;
        }
        break;
    default:
        break;
    }

    // Menghitung total harga beli
    totHrg = hrgSatu * jumlProd;
    // Menghitung total harga akhir
    totHrgAkh = totHrg - disk - diskTamb;

    // Mencetak output
    printf("Harga Satuan        : Rp. %d.00 \n", hrgSatu);
    printf("Jumlah Beli         : %d \n", jumlProd);
    printf("Total Harga Beli    : Rp. %d \n", totHrg);
    printf("Diskon              : Rp. %d.00 \n", disk);
    printf("Diskon Tambahan     : Rp. %d.00 \n", diskTamb);
    printf("Total Harga Akhir   : Rp. %d.00 \n", totHrgAkh);
    printf("------------------------------------\n");

    return 0;
}