#include <stdio.h>
#include <stdlib.h>

void cetak (int angka){
    //BASIS
    if(angka == 0)
    {
        printf("0\n");
    }
    //REKURENS
    else
    {
        printf("%i\n",angka);
        cetak(angka-1);

    }
}

int factorial(int angka) {
    if (angka == 1){
        return 1;
    }
    else {
        return angka*factorial(angka-1);
    }
}
int main()
{
    cetak(2);
    printf("\n");
 printf("Faktorial : %i\n",factorial(5));
//    int i=10;
//    for(i;i>0;i--)
//    {
//        cetak(i);
//    }


    return 0;
}
