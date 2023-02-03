/* ------------------------------------
        Modul 3 - Operasi Aritmatika
   ------------------------------------
*/

#include<stdio.h>

int main(){
    // Deklarasi Variabel
    int x, y;
    int penjumlahan, pengurangan, sisaBagi, perkalian;
    float pembagian;

    // Inisialisasi nilai
    x = 54;
    y = 9;

    // Operasi matematika
    penjumlahan = x + y;
    pengurangan = x - y;
    sisaBagi    = x % y;
    perkalian   = x * y;
    pembagian   = x / y;

    // Menampilkan output
    printf("Hasil x + y = %d \n", penjumlahan);
    printf("Hasil x - y = %d \n", pengurangan);
    printf("Hasil x %% y = %d \n", sisaBagi);
    printf("Hasil x * y = %d \n", perkalian);
    printf("Hasil x / y = %.2f \n", pembagian);
    
    return 0;
}