#include<stdio.h>

void main(){
    /*
    Perbedaan terlihat bila isinya dicetak sebagai nilai numerik.
    */
    // unsigned char X = 'A';
    signed char X = 'A';
    // unsigned char X = 65;
    // signed char X = 65;
    printf("%c", X);
    printf("\n%i", X);
}