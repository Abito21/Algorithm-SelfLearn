/* ------------------------------------
        Percobaan Scanf
   ------------------------------------
*/

#include<stdio.h>

int main(){
    // Deklarasi variabel
    char nama[50];
    // char temp;
    int tinggi;
    char alamat[50];

    // Form Input
    printf("===================== Form Input =====================\n");
    printf("Input Nama Pelanggan        : ");
    scanf("%[^\n]s", &nama);
    printf("Input Tinggi <cm>           : ");
    scanf("%d", &tinggi);
    getchar();
    printf("Input Alamat Pelanggan      : ");
    // scanf("%c", &temp);
    scanf("%[^\n]s", &alamat);

    // Cetak Output
    printf("----------------------------------------------------\n");
    printf("\n=================== Cetak Output ===================\n");
    printf("Nama Pelanggan      : %s \n", nama);
    printf("Tinggi              : %d cm \n", tinggi);
    printf("Alamat              : %s \n", alamat);
    printf("----------------------------------------------------\n");

    return 0;
}