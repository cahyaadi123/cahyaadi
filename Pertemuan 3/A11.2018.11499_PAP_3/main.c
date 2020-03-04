#include "header.h"

int main()
{
    int a1[10] = {NULL}, a2[10] = {NULL};
    int a3[10] = {NULL}, a4[10] = {NULL};

    a1[0]=1; a1[1]=2; a1[2]=3; a1[3]=4; a1[4]=5; a1[5]=6;
    a2[0]=1; a2[1]=2; a2[2]=3; a2[3]=4;
    a3[0]=2; a3[1]=4; a3[2]=9; a3[3]=5; a3[4]=1;
    a4[0]=2; a4[1]=8; a4[2]=5;

    printf("jumlah : %d\n", count_arr(a1, 10));
    printf("jumlah : %d\n", count_arr(a2, 10));
    printf("jumlah : %d\n", count_arr(a3, 10));
    printf("jumlah : %d\n", count_arr(a4, 10));

    int arr1[] = { 3, 5, 38, 44, 47 };
    int arr2[] = { 3, 44, 38, 5, 47 };
    int arr3[] = { 2, 15, 26, 27, 36 };
    int arr4[] = { 15, 36, 27, 2, 26 };

    cek_urut(arr1, 5);
    printf("hasil : %d", cek_urut(arr1, 5));

    return 0;
}
