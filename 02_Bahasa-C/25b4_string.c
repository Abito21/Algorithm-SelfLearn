#include<stdio.h>
#include<string.h>

void main(){
    char A[5] = "ABID";
    char B[5] = "ABCD";
    strcpy(B, A);
    printf(B);
}