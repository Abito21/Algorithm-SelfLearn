/* -------------------------------------------
        Modul 6 - Perulangan While
   -------------------------------------------
*/

#include<stdio.h>

int main(){
    // Case 1
    char ulangi = 'y';
    int counter = 0;

    // Perulangan while
    while(ulangi == 'y'){
        printf("Apakah kamu mau mengulang? \n");
        printf("Jawab (y/t): ");
        scanf(" %c", &ulangi);

        // increament counter
        counter++;
    }

    printf("\n\n----------\n");
    printf("Perulangan Selesai! \n");
    printf("Kamu mengulang sebanyak %i kali. \n", counter);

    // Case 2
    /*
    // Akan menimbulkan erro karena tidak memiliki batasan.
    int main(){
        int i = 1;
        while(i <=5){
            printf("Hello World \n");
        }
        return 0;
    }
    */

    // Case 3
    /*
    int main(){
        int i = 10;
        while (i > 5){
            printf("Hello World %i \n",i);
            i--;
        }
        return 0;
    }
    */

    // Case 4
    /*
    // Tidak menampilkan apapun.
    int main(){
        int i = 10;
        while (i <= 5){
            printf("Hello World %i \n",i);
            i++;
        }
        return 0;
    }
    */

    return 0;
}