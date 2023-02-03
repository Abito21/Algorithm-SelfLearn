/* ------------------------------------
        Tugas Modul 3 - Nota Belanja
   ------------------------------------
*/

#include<stdio.h>

int main(){
    // Deklarasi Variabel
    // Input Data Transaksi
    char toko[50];
    char nama[50];
    char temp; // Digunakan untuk menampung data sementara
    char tanggal[50];
    // Input Item Transaksi
    char input1[50]; int harga1;
    char input2[50]; int harga2;
    char input3[50]; int harga3;
    char input4[50]; int harga4;
    char input5[50]; int harga5;
    int totalBelanja;
    int totalBayar;
    // Konstanta Diskon
    const int diskon = 30;

    // Nilai Input
    // Input Data Transaksi
    printf("================== Nota Belanja ==================\n");
    // Nama Konsumen
    printf("Input Nama Konsumen : ");
    scanf("%[^\n]s", nama);
    // Tanggal Transaksi
    printf("Input Tanggal Tanggal (DD/MM/YYYY): ");
    scanf("%s", tanggal);

    // Input Item Transaksi
    printf("================= Daftar Belanja =================\n");
    // Input 1
    printf("Input Item 1        : ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &input1);
    printf("Input harga Item 1  : ");
    scanf("%d", &harga1);
    printf("\n");
    // Input 2
    printf("Input Item 2        : ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &input2);
    printf("Input harga Item 2  : ");
    scanf("%d", &harga2);
    printf("\n");
    // Input 3
    printf("Input Item 3        : ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &input3);
    printf("Input harga Item 3  : ");
    scanf("%d", &harga3);
    printf("\n");
    // Input 4
    printf("Input Item 4        : ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &input4);
    printf("Input harga Item 4  : ");
    scanf("%d", &harga4);
    printf("\n");
    // Input 5
    printf("Input Item 5        : ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &input5);
    printf("Input harga Item 5  : ");
    scanf("%d", &harga5);
    printf("\n");

    // Operasi Aritmatika
    totalBelanja = harga1 + harga2 + harga3 + harga4 + harga5;
    totalBayar = totalBelanja - (totalBelanja * diskon / 100);

    // Nota Belanja
    printf("================== Nota Belanja ==================\n");
    printf("Toko            : Pelangi Nusantara \n");
    printf("Konsumen        : %s \n", nama);
    printf("Transaksi       : %s \n", tanggal);
    // Daftar Belanja
    printf("================= Daftar Belanja =================\n");
    printf("%s \t: Rp %d \n", input1, harga1);
    printf("%s \t: Rp %d \n", input2, harga2);
    printf("%s \t: Rp %d \n", input3, harga3);
    printf("%s \t: Rp %d \n", input4, harga4);
    printf("%s \t: Rp %d \n", input5, harga5);
    // Daftar Belanja
    printf("=================== Total Bayar ==================\n");
    printf("Total Belanja   : Rp %d \n", totalBelanja);
    printf("Diskon          : %d.0 %% \n", diskon);
    printf("Total Bayar     : Rp %d.00 \n", totalBayar);
    printf("==================================================\n");

    return 0;
}