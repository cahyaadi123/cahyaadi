#include "header.h"

int main()
{
    identitas();
    int banyak,i,j,jumlah=0;
    printf("Banyak\t= ");scanf("%d",&banyak);
    int data[banyak];
    bubble_sort(data,banyak);
    return 0;
}
