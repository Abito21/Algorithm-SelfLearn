/* ------------------------------------
        Modul 3 - Operator Relasional
   ------------------------------------
*/

#include<stdio.h>

int main(){
    // Deklarasi Variabel
    int x = 37;
    int y = 42;
    int z = 42;
    int a, b, c, d, e, f;

    // Operasi perbandingan
    a = x < y;
    b = x > y;
    c = x == y;
    d = z != y;
    e = y <= z;
    f = z >= x;

    // Menampilkan output
    printf("x < y = %d \n", a);
    printf("y <= z = %d \n", e);
    printf("x > y = %d \n", b);
    printf("z >= x = %d \n", f);
    printf("x == y = %d \n", c);
    printf("y != z = %d \n", d);

    return 0;
}