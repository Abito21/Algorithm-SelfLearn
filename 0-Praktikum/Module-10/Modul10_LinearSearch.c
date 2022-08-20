/* -------------------------------------------
        Modul 10 - Linear Search (Sequential)
   -------------------------------------------
*/

#include<stdio.h>

int main(){
    // Deklarasi variabel
    int data[5] = {3, 4, 5, 1, 9};
    int key;
    int i;

    printf("Input nilai angka : ");
    scanf("%d", &key);
    getchar();

    for (i = 0; i < 5; i++)
    {
        if(data[i] == key){
            printf("Nilai %d di indeks ke-%d", key, i);
            break;
        }
    }

    return 0;
}