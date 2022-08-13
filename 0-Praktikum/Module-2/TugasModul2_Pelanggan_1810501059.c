/* ------------------------------------
        Tugas Modul 2 Input - Output
   ------------------------------------
*/

#include<stdio.h>

int main(){
    // Deklarasi variabel
    char nama[50];
    char usia[3];
    char berat[5];
    char tinggi[5];
    char alamat[50];
    char golongan[3];
    char pendapatan[20];

    // Form Input
    printf("===================== Form Input =====================\n");
    printf("Input Nama Pelanggan        : ");
    gets(nama);
    printf("Input Usia <th>             : ");
    gets(usia);
    printf("Input Berat <kg>            : ");
    gets(berat);
    printf("Input Tinggi <cm>           : ");
    gets(tinggi);
    printf("Input Alamat Pelanggan      : ");
    gets(alamat);
    printf("Input Golongsn <A/B/C/D>    : ");
    gets(golongan);
    printf("Input Pendapatan/bulan <Rp.>: ");
    gets(pendapatan);

    // Cetak Output
    printf("----------------------------------------------------\n");
    printf("\n=================== Cetak Output ===================\n");
    printf("Nama Pelanggan      : %s \n", nama);
    printf("Usia                : %s tahun \n", usia);
    printf("Berat               : %s.00 kg \n", berat);
    printf("Tinggi              : %s cm\n", tinggi);
    printf("Alamat              : %s \n", alamat);
    printf("Golongan            : %s \n", golongan);
    printf("Pendapatan/bulan    : Rp. %s \n", pendapatan);
    printf("----------------------------------------------------\n");

    return 0;
}