/* -------------------------------------------
        Modul 11 - Algoritma Pertukaran
   -------------------------------------------
*/

#include<stdio.h>

int main(){
    int data_1;
    int data_2;
    int temp = 0;

    printf("Input nilai data-1 : ");
    scanf("%d", &data_1);
    getchar();
    printf("Input nilai data-2 : ");
    scanf("%d", &data_2);
    getchar();

    temp = data_1;
    data_1 = data_2;
    data_2 = temp;

    printf("\nData-1 yaitu %d dan data-2 yaitu %d. \n", data_1, data_2);
}