#include<stdio.h>
#include<string.h>

void main(){
    char A[5] = "ABID";
    char B[5] = "ABCD";
    /*  strcpy (sstring copy)
        Menyaling string A ke B.
    */
    strcpy(B, A);
    printf(B);
}