/* -------------------------------------------
        Ulangan Tengah Semester Pemrograman
        Judul : Bank Sampah
   -------------------------------------------
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    // Menampilkan menu
    printf("============= Daftar Sampah =============\n");
    printf(" A. Sampah Kertas \n");
    printf(" B. Sampah Plastik \n");
    printf(" C. Sampah Logam \n");
    printf(" D. Sampah Kaca \n");
    //printf("========== Status Keanggotaan ==========\n");
    //printf(" 1. Anggota \n");
    //printf(" 2. Bukan Anggota  \n");
    printf("-----------------------------------------\n");

    // Deklarasi variabel
    // Variabel input
    char kategori;
    int status;
    char nama[50];
    char tanggal[50];
    float beratSamp;
    // Variabel output
    int harga;
    int bonus;
    int upah;

    // Membuat input
    printf("Nama Penyetor               : ");
    scanf("%[^\n]s", &nama);
    getchar();
    printf("Tanggal Transaksi           : ");
    scanf("%[^\n]s", &tanggal);
    getchar();
    printf("\n=== Kode Keanggotaan ===\n");
    printf(" 1. Anggota \n");
    printf(" 2. Bukan Anggota \n");
    printf("------------------------\n");
    printf("Status Keanggotaan (1/2)    : ");
    scanf("%d", &status);
    getchar();
    printf("------------------------\n");
    printf("Kategori sampah (A/B/C/D)   : ");
    scanf("%c", &kategori);
    getchar();
    printf("Berat sampah                : ");
    scanf("%f", &beratSamp);
    getchar();

    // Membuat output
    printf("======================================== \n");
    printf("    Laporan Transaksi \n");
    printf("======================================== \n");
    printf("Tanggal         : %s \n", tanggal);
    printf("Nama Penyetor   : %s \n", nama);
    printf("Status Member   : %c \n", status);
    printf("------------------------ \n");
    
    // Cek Total Upah
    switch (toupper(kategori))
    {
    case 'A':
        printf("Jenis Sampah\t: Sampah Kertas \n");
        harga = 2000;
        if (status == 1)
        {
            
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
    case 'D':
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

    printf("============== Terima Kasih ============ \n");   

}