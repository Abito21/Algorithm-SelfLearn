/* ------------------------------------
        Modul 3 - Deklarasi Variabel
   ------------------------------------
*/

#include<stdio.h>

int main(){
    // Deklarasi variabel
    char nama[50] = "Abid Juliant Indraswara";
    char asalSekolah[50] = "SMA Negeri 4 Magelang";
    char rombel = 'A';
    int usia = 18;
    float berat = 56.9;
    float tinggi = 176.3;

    // Menampilkan output
    printf("--------------------------------\n");
    printf("Nama Mahasiswa  : %s \n", nama);
    printf("Asal Sekolah    : %s \n", asalSekolah);
    printf("Rombel          : %c \n", rombel);
    printf("Usia            : %d Tahun \n", usia);
    printf("Berat           : %.2f kg \n", berat);
    printf("Tinggi          : %.2f cm \n", tinggi);
    printf("--------------------------------\n");

    return 0;
}