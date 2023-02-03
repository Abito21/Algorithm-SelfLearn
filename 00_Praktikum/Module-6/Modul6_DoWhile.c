/* -------------------------------------------
        Modul 6 - Perulangan Do - While
   -------------------------------------------
*/

#include <stdio.h>

int main(){
    // Case 1
    char ulangi = 'y';
    int counter = 0;

    do{
        printf("Apakah kamu mau mengulang? \n");
        printf("Jawab (y/t): ");
        scanf(" %c", &ulangi);

        // increament counter
        counter++;
    } while(ulangi == 'y');

    printf("\n\n----------\n");
    printf("Perulangan Selesai! \n");
    printf("Kamu mengulang sebanyak %i kali. \n", counter);

    // Case 2
    /*
    int i = 1;
    do {
        printf("Hello World \n");
        i++;
    }
    while (i <= 5);
    return 0;
    */

    // Case 3
    /*
    int i = 1;
    do {
        printf("%i", i*3);
        i++;
    }
    while (i <= 5);
    return 0;
    */

    return 0;
}