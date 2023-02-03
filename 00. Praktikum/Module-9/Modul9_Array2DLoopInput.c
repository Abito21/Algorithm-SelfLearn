/* -------------------------------------------
        Modul 9 - Array 2 Dimensi
        Topik : With Loop to Input Data
   -------------------------------------------
*/

#include<stdio.h>

int main(){
    int nbar, nkol, nilai;
    int panjang_baris = 2;
    int panjang_kolom = 2;
    int angka[2][2];

    for (nbar = 0; nbar < panjang_baris; nbar++)
    {
        for (nkol = 0; nkol < panjang_kolom; nkol++)
        {
            printf("Input nilai acak : ");
            scanf("%d", &nilai);
            getchar();

            angka[nbar][nkol] = nilai;
        }
    }

    printf("\n=== Cetak Matriks === \n");
    printf("\t %d %d \n", angka[0][0], angka[0][1]);
    printf("\t %d %d", angka[1][0], angka[1][1]);

    return 0;    
}