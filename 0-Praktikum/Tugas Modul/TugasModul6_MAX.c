#include<stdio.h>

int main(){
    int nilai;
    do
    {
        printf("Masukkan Nilai : ");
        scanf("%d", &nilai);

        if (nilai < 0 || nilai > 100)
        {
            printf("Data nilai tidak sesuai. \n");
        }
        
    } while (nilai < 0 || nilai > 100);
    if (nilai >= 60)
    {
        printf("Anda Lulus");
    } else {
        printf("Anda Gagal");
    }
    
}