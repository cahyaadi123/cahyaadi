#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr [5]={5,3,2,5,1};
    int angka,x;
    printf("masukkan angka yg dicari : ");scanf("%d",&angka);
    for (x=0;x<5;x++)
    {
        if (arr[x] == angka)
        {
            printf("Isi array %d ada di index %d \n",angka,x);
        }
    }
    return 0;
}
