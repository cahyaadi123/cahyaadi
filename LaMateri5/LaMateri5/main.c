#include <stdio.h>
#include <stdlib.h>
#include"header.h"
int main()
{
    int n,l;
    printf("Masukan Banyak Array = "); scanf("%d",&n);
    int data[n];
    for (l=0;l<n;l++)
    {
        printf("Data ke-%d = ",l); scanf("%d",&data[l]);
    }
    printf("Cetak Array\n");




    return 0;
}
