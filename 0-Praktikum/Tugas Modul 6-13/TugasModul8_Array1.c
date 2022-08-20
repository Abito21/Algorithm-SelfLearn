#include<stdio.h>

int main(){
    char A[15]="ABCDEFGHIJKLMNO";
    int i, k, cetak, kolom;
    cetak = 1; kolom = 1;
    for(i=0; i<=14; i++){
        if (cetak == kolom)
        {
            printf("\n");
            for (k = 1; k <= (5-kolom); k++) // k<=4
            {
                printf("  "); //spasi pertama 8
            }
            cetak = 1; kolom++;
        }
        printf("%2c", A[i]);
        cetak++;        
    }
}