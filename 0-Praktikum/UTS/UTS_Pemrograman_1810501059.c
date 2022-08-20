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
    char statCetak;
    char nama[50];
    char tanggal[50];
    float beratSamp;
    // Variabel output
    float harga;
    float bonus;
    float bonusTamb = 0;
    float upah;
    float upahBonus;
    float upahTotal;

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

    // Cek Keanggotaan
    switch (status)
    {
    case 1:
        statCetak = 'Y';
        break;
    case 2:
        statCetak = 'T';
    default:
        printf("Status member tidak valid.");
        break;
    }

    printf("Status Member   : %c \n", statCetak);
    printf("------------------------ \n");
    
    // Cek Total Upah
    switch (toupper(kategori))
    {
    case 'A':
        printf("Jenis Sampah\t: Sampah Kertas \n");
        harga = 2000;
        if (status == 1)
        {
            bonus = 15;
            if (beratSamp > 7)
            {
                bonusTamb = 5;
            }
        } else if (status == 2)
        {
            if (beratSamp >= 5)
            {
                bonusTamb = 7;
            } else if (beratSamp >= 9)
            {
                bonusTamb = 10;
            }
        } else {
            printf("Kode input anggota tidak sesuai!");
        }
        break;
    case 'B':
        printf("Jenis Sampah\t: Sampah Plastik \n");
        harga = 1800;
        if (status == 1)
        {
            bonus = 15;
            if (beratSamp > 7)
            {
                bonusTamb = 5;
            }
        } else if (status == 2)
        {
            if (beratSamp >= 5)
            {
                bonusTamb = 7;
            } else if (beratSamp >= 9)
            {
                bonusTamb = 10;
            }
        } 
        break;
    case 'C':
        printf("Jenis Sampah\t: Sampah Logam \n");
        harga = 5700;
        if (status == 1)
        {
            bonus = 15;
            if (beratSamp > 7)
            {
                bonusTamb = 5;
            }
        } else if (status == 2)
        {
            if (beratSamp >= 5)
            {
                bonusTamb = 7;
            } else if (beratSamp >= 9)
            {
                bonusTamb = 10;
            }
        } 
        break;
    case 'D':
        printf("Jenis Sampah\t: Sampah Kaca \n");
        harga = 4300;
        if (status == 1)
        {
            bonus = 15;
            if (beratSamp > 7)
            {
                bonusTamb = 5;
            }
        } else if (status == 2)
        {
            if (beratSamp >= 5)
            {
                bonusTamb = 7;
            } else if (beratSamp >= 9)
            {
                bonusTamb = 10;
            }
        } 
        break;
    default:
        printf("Kategori sampah tidak tersedia.");
        break;
    }

    // Menghitung total upah
    upah = harga * beratSamp;
    upahBonus = upah * (bonus + bonusTamb) / 100;
    upahTotal = upah + upahBonus;

    printf("Berat Sampah\t: %.1f \n", beratSamp);
    printf("Bonus Member\t: %.1f \n", bonus);
    printf("Bonus Tambahan\t: %.1f \n", bonusTamb);
    printf("Total Upah\t: Rp. %.1f \n", upahTotal);
    printf("============== Terima Kasih ============ \n");   

}