#include<stdio.h>

int main(){
    float U, B; 
    U = 1000000;
    int i;
    for (i=1; i<=10; i++){
        B = U * 0.02;
        U = U + B;
        printf("Total : %.2f \n", U);
    }

    return 0;
}