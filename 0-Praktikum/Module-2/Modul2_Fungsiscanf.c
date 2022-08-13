/* ------------------------------------
        Modul 2 - Fungsi scanf
   ------------------------------------
*/

#include<stdio.h>

int main(){
    // Deklarasi variabel
    char nama[50];
    int usia;
    float berat;

    // Menggunakan fungsi printf dan scanf
    printf("Input Nama anda : ");
    scanf("%s", &nama);
    printf("Input Usia anda : ");
    scanf("%d", &usia);
    printf("Input Berat anda: ");
    scanf("%f", &berat);

    // Menampilkan output
    printf("----------------------------\n");
    printf("Nama   : %s \n", nama);
    printf("Usia   : %d tahun \n", usia);
    printf("Berat  : %f kg \n", berat);
}