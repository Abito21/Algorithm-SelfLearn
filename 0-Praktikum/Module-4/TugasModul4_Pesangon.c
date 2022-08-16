/* -------------------------------------------
        Tugas Modul 4 - Percabangan IF, IF...ELSE, IF...ELSE IF..., dan SWITCH
        Judul : Pesangon
   -------------------------------------------
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h> // Library toupper
#include<stdlib.h> // Library system

int main(){
    // Deklarasi Variabel
    // Input Karyawan
    char nama[50];
    float masaKerja;
    char gol;
    // Variabel Operasi Aritmatika
    int gajiPokok;
    int jumlahPesangon;
    int upahBulan;
    int pesangon;
    // Kontstansta
    int tunjangan = 300000; 

    // Membuat input
    printf("================= Input Data Karyawan =================\n");
    printf("Input Nama Karyawan     : ");
    scanf("%[^\n]s", &nama);
    getchar();
    printf("Input Masa Kerja        : ");
    scanf("%f", &masaKerja);
    getchar();
    printf("Input Golongan          : ");
    scanf("%c", &gol);
    getchar();
    system("cls");

    // Cek Nilai kelulusan
    if (masaKerja < 1){
        jumlahPesangon = 1;
    } else if (masaKerja >= 1 && masaKerja < 2){
        jumlahPesangon = 2;
    } else if (masaKerja >= 2 && masaKerja < 3){
        jumlahPesangon = 3;
    } else if (masaKerja >= 3 && masaKerja < 4){
        jumlahPesangon = 4;
    } else if (masaKerja >= 4 && masaKerja < 5){
        jumlahPesangon = 5;
    } else if (masaKerja >= 5 && masaKerja < 6){
        jumlahPesangon = 6;
    } else if (masaKerja >= 6 && masaKerja < 7){
        jumlahPesangon = 7;
    } else if (masaKerja >= 7 && masaKerja < 8){
        jumlahPesangon = 8;
    } else if (masaKerja > 8){
        jumlahPesangon = 9;
    } else {
        printf("Jumlah pesangon tidak valid");
    }

    // Cek predikat kelulusan
    // toupper : digunakan untuk mengecek nilai karakter besar ataupun kecil
    switch (toupper(gol))
    {
    case 'A':
        gajiPokok = 2250000;
        break;
    case 'B':
        gajiPokok = 1750000;
        break;
    case 'C':
        gajiPokok = 1500000;
        break;
    case 'D':
        gajiPokok = 1100000;
        break;    
    default:
        printf("\nJumlah Pesangin tidak valid \n");
        break;
    }

    // Menghitung total nilai
    upahBulan = gajiPokok + tunjangan;
    // Menghitung nilai rata-rata
    pesangon = upahBulan * jumlahPesangon;

    // Mencetak Output
    printf("\n=========== Data Karyawan =========\n");
    printf("Nama Karyawan   : %s \n", nama);
    printf("Masa Kerja      : %.1f tahun \n", masaKerja);
    printf("Golongan        : %c \n", gol);
    printf("\n=========== Upah Bulanan ==========\n");
    printf("Gaji Pokok      : Rp. %d \n", gajiPokok);
    printf("Tunjangan       : Rp. %d \n", tunjangan);
    printf("Upah per bulan  : Rp. %d \n", upahBulan);
    printf("\n============= Pesangon ============\n");
    printf("Total Pesangon  : Rp. %d \n", pesangon);
    printf("===================================\n");

    return 0;
}