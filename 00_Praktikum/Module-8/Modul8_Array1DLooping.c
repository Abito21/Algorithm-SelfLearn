/* -------------------------------------------
        Modul 8 - Array 1 Dimensi
        Topik : Looping
   -------------------------------------------
*/

#include<stdio.h>

int main(){
    int i;
    int data[3];
    int nilai;

    for (i = 0; i < 3; i++)
    {
        printf("Input nilai : ");
        scanf("%d", &nilai);
        getchar();
        data[i] = nilai;
    }

    printf("\nData ke-1 : %i \n", data[0]);
    printf("Data ke-2 : %d \n", data[1]);
    printf("Data ke-3 : %d \n", data[2]);
    
    return 0;
}