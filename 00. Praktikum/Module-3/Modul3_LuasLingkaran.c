/* ------------------------------------
        Modul 3 - Luas Lingkaran
   ------------------------------------
*/

#include<stdio.h>

int main(){
    // Deklarasi Konstanta
    const float PHI = 3.14;

    // Deklarasi Variabel
    float jariJari;
    float luas;

    // Membuat Input
    printf("Input jari-jari: ");
    scanf("%f", &jariJari);

    // Menghitung Luas Lingkaran
    luas =  PHI * (jariJari * jariJari);

    // Menampilkan Output
    printf("---------------------------------------\n");
    printf("Jari-Jari       : %.2f cm \n", jariJari);
    printf("Nilai PHI       : %.2f \n", PHI);
    printf("Luas Lingkaran  : %.2f cm2 \n", luas);
    printf("---------------------------------------\n");

    return 0;
}