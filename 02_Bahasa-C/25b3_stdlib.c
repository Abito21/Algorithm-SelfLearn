#include<stdio.h> // standard input output
#include<stdlib.h> // standard library

void main(){
    char kar[17] = "1234567.ABCDefgh#";
    int Nilai;
    /*  atoi (alpha to integer)
        Fungsi stdlib yang mengembalikan nilai integer dari suatu string,
        mulai dari karakter terdepan hingga ditemui nilai yang bukan integer.
    */
    Nilai = atoi(kar); 
    printf("%i", Nilai);
}