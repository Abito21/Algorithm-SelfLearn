#include<stdio.h>
#include<conio.h>

// gotoxy() function
/*
void gotoxy(int x,int y)
{
printf("%c[%d;%df",0x1B,y,x);
}
*/

void main(){
    /*
    int X, Y, I, J;
    for (I = 0; I <= 10; J++)
    {
        for (J = I; J <= 10; J++)
        {
            gotoxy(I, J); printf("*" );
        }
    }
    */
    gotoxy(10,15);
    printf("Jakarta");
}