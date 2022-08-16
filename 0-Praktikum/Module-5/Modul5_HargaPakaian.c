/* -------------------------------------------
        Modul 5 - Percabangan Bertingkat
        Judul : Menentukan Harga Pakaian
   -------------------------------------------
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    // Deklarasi variabel
    char kode;
    char ukuran[4];

    // Menampilkan pilihan daftar pakaian
    printf("======== Daftar Pakaian ========\n");
    printf(" A. Kaos Motif Lengan Pendek    \n");
    printf(" B. Kaos Polos Lengan Pendek    \n");
    printf(" C. Baju Batik Lengan Panjang   \n");
    printf("--------------------------------\n");

    // Membuat input
    printf("Pilih kode baju (A/B/C): ");
    scanf("%c", &kode);
    getchar();
    printf("Ukuran diinginkan (S/M/L/XL): ");
    scanf("%s", &ukuran);
    getchar();

    // Cek harga baju
    switch (toupper(kode))
    {
    case 'A':
        
        printf("\nKaos Motif Lengan Pendek \n");
        // Cek harga sesuai ukuran
        if(strcmp("S", ukuran)== 0){
            printf("Harga Rp. 45000 \n");
        } else if(strcmp("M", ukuran)== 0){
            printf("Harga Rp. 50000 \n");
        } else if(strcmp("L", ukuran)== 0){
            printf("Harga Rp. 53000 \n");
        } else {
            printf("Ukuran %s kosong \n", ukuran);
        }
        break;
    case 'B':
        printf("\nKaos Polos Lengan Pendek \n");
        if(strcmp("L", ukuran)== 0){
            printf("Harga Rp. 35000 \n");
        } else if(strcmp("XL", ukuran)== 0){
            printf("Harga Rp. 45000 \n");
        } else {
            printf("Ukuran %s kosong \n", ukuran);
        }
        break;
    case 'C':
        printf("\nBaju Batik Lengan Panjang \n");
        if(strcmp("M", ukuran)== 0){
            printf("Harga Rp. 120000 \n");
        } else {
            printf("Ukuran %s kosong \n", ukuran);
        }
        break;
    default:
    printf("\nInput kode tidak valid");
        break;
    }

    return 0;
}

