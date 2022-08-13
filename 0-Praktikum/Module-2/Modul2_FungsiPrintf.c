/* ------------------------------------
        Modul 2 - Fungsi printf
   ------------------------------------
*/

#include<stdio.h>

int main(){

    // Deklarasi variabel
    char nama[35] = " Abid Indraswara";
    int usia = 17;
    char gender = 'L';

    // Menggunakan printf
    printf("Nama Saya     : %s \n", nama);
    printf("Usia Saya     : %d \n", usia);
    printf("Jenis Kelamin : %c", gender);

    return 0;
}