/* -------------------------------------------
        Modul 9 - Array 2 Dimensi
        Topik : With Loop to Input Data
   -------------------------------------------
*/

#include<stdio.h>

int main(){
    int nbar;
    int nkol;
    int nilai;
    int angka[2][2] = {75, 83, 
                       92, 77};

    for (nbar = 0; nbar < 2; nbar++)
    {
        for (nkol = 0; nkol < 2; nkol++)
        {
            // printf("Input nilai acak : ");
            // scanf("%d", nilai);
            printf(" %d", angka[nbar][nkol]);
        }
        printf("\n");
    }

    return 0;    
}