/* ------------------------------------
        Modul 3 - Deklarasi Variabel
                  Tanpa Nilai Awal
   ------------------------------------
*/

#include<stdio.h>

int main(){
    // Deklarasi variabel dengan nilai awal
    char nama[50] = "Abid Juliant Indraswara";
    char asalSekolah[50] = "SMA Negeri 4 Magelang";

    // Deklarasi variabel tanpa nilai awal
    char rombel;
    int usia;
    float berat;
    float tinggi;
    
    // Inisialisasi nilai variabel
    rombel = 'A';
    usia = 18;
    berat = 56.9;
    tinggi = 176.3;

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