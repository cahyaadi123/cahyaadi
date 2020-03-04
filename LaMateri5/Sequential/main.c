#include "header.h"

int main()
{
    int i;
    int arr[]={3,7,9,6,4}; // STATIS (BUKAN INPUTAN)
    for (i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }printf("\n");
    printf("Pencarian Data = %d\n",sequential_search(arr,5,10)); //10 ADALAH ANGKA YANG DICARI
    if (sequential_search== 1)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    return 0;
}
