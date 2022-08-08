// String Copy from variable to another variable
#include<stdio.h>
#include<string.h>

void main(){
    char A[7] = "ABCDEF";
    char B[7] = "HIJKLM";
    strcpy(B, A);
    printf(B);
}