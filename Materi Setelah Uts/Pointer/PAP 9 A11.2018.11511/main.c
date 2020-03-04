#include <stdio.h>
#include <stdlib.h>
#include"pustaka.h"

int main()
{
    ///NAMA : MOCHAMAD SAIFULLAH
    ///NIM  : A11.2018.11511
puts("\n ===== SwapValue ===== \n\t");
    int a = 5, b = 6, c = 7, d = 8;
    int e = 10,f = 11,g = 12,h = 13;
    printf("***** Sebelum Ditukar *****\n");
    printf("\ta = %d, b = %d\n",a,b);
    printf("\tc = %d, d = %d\n",c,d);
    printf("\te = %d, f = %d\n",e,f);
    printf("\tg = %d, h = %d\n",g,h);
    printf("***** Sesudah Ditukar *****\n");
    swapValue(&a,&b);
    swapValue(&c,&d);
    swapValue(&e,&f);
    swapValue(&g,&h);
    printf("\ta = %d, b = %d\n",a,b);
    printf("\tc = %d, d = %d\n",c,d);
    printf("\te = %d, f = %d\n",e,f);
    printf("\tg = %d, h = %d\n",g,h);
puts("\n ===== ChangeValue ===== \n\t");
    changevalue(&a,5,9);
    printf("Hasilnya = %d\n",a);
    changevalue(&b,7,7);
    printf("Hasilnya = %d\n",b);
    changevalue(&c,6,5);
    printf("Hasilnya = %d\n",c);
    changevalue(&d,2,9);
    printf("Hasilnya = %d\n",d);
puts("\n ===== CETAK ULANG ARRAY =====\n\t");
    int *arr1, *arr2, *arr3, *arr4;
    printf("Mencetak sampai angka 6\n");
    initDynArray(&arr1,6);
    printf("\n");
    printf("Mencetak sampai angka 4\n");
    initDynArray(&arr2,4);
    printf("\n");
    printf("Mencetak sampai angka 5\n");
    initDynArray(&arr3,5);
    printf("\n");
    printf("Mencetak sampai angka 3\n");
    initDynArray(&arr4,3);
    printf("\n");
puts("\n ===== CETAK ULANG ARRAY2 =====\n\t");
    int Arr1[] = {1, 2, 3, 4, 5};
    int Arr2[] = {6, 7, 8, 9, 10};
    int Arr3[] = {21, 22, 23, 24, 25};
    int Arr4[] = {31, 32, 33, 34, 35};
    puts("Cetak Ulang Array Data ke-1");
    printarray(Arr1,5);
    printf("\n");
    puts("Cetak Ulang Array Data ke-1");
    printarray(Arr2,5);
    printf("\n");
    puts("Cetak Ulang Array Data ke-1");
    printarray(Arr3,5);
    printf("\n");
    puts("Cetak Ulang Array Data ke-1");
    printarray(Arr4,5);
    printf("\n");
puts("\n ===== RATA-RATA =====\n\t");
    float A,B,C,D;
    int avg1[] ={1, 2, 3, 4, 5};
    int avg2[] ={6, 7, 8, 9, 10};
    int avg3[] ={11, 12, 13, 14, 15};
    int avg4[] ={16, 17, 18, 19, 20};
    printf("\n Hasil rata-rata dari 1,2,3,4,5 : \n");
    putaverage(&A,avg1,5);
    printf("\t= %.2f",A);
    printf("\n Hasil rata-rata dari 1,2,3,4,5 : \n");
    putaverage(&B,avg2,5);
    printf("\t= %.2f",B);
    printf("\n Hasil rata-rata dari 1,2,3,4,5 : \n");
    putaverage(&C,avg3,5);
    printf("\t= %.2f",C);
    printf("\n Hasil rata-rata dari 1,2,3,4,5 : \n");
    putaverage(&D,avg4,5);
    printf("\t= %.2f",D);
    return 0;
}
