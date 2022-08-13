/* ------------------------------------
        Modul 2 - Fungsi fgets
   ------------------------------------
*/

#include<stdio.h>

int main(){
    // Deklarasi variabel
    char nama[50];
    char usia[4];
    char berat[6];

    // Menggunakan fungsi printf dan fgets
    printf("Input Nama anda : ");
    fgets(nama, 50, stdin);
    printf("Input Usia anda : ");
    fgets(usia, 4, stdin);
    printf("Input Berat anda: ");
    fgets(berat, 6, stdin);

    // Menampilkan output
    printf("---------------------------\n");
    printf("Nama     : %s", nama);
    printf("Usia     : %s", usia);
    printf("Berat    : %s", berat);

    return 0;
}