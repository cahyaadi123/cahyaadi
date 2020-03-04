#include"header.h"
int main()
{
    puts("\n ===== SwapValue =====\n\t");
    int a = 5, b = 6, c = 7, d = 8;
    int e = 10,f = 11,g = 12,h = 13;
    printf("SEBELUM DI TUKAR\n");
    printf("a = %d, b = %d\n", a, b);
    printf("c = %d, d = %d\n", c, d);
    printf("e = %d, f = %d\n", e, f);
    printf("g = %d, h = %d\n", g, h);
    swapvalue(&a,&b);
    swapvalue(&c,&d);
    swapvalue(&e,&f);
    swapvalue(&g,&h);
    printf("SESUDAH DI TUKAR\n");
    printf("a = %d, b = %d\n", a, b);
    printf("c = %d, d = %d\n", c, d);
    printf("e = %d, f = %d\n", e, f);
    printf("g = %d, h = %d\n", g, h);

    puts("\n ===== change Value =====\n\t");
    changevalue(&a,5,9);
    printf("Hsil dari = %d\n", a);
    changevalue(&b,7,7);
    printf("Hsil dari = %d\n", b);
    changevalue(&c,6,5);
    printf("Hsil dari = %d\n", c);
    changevalue(&d,2,9);
    printf("Hsil dari = %d\n", d);

    puts("\n ===== CETAK ULANG ARRAY =====\n\t");
    int *arr1, *arr2, *arr3, *arr4;
    printf("cetak array sampai angka 6\n");
    initDynArray(&arr1, 6);
    printf("\n");
    printf("cetak array sampai angka 4\n");
    initDynArray(&arr2, 4);
    printf("\n");
    printf("cetak array sampai angka 5\n");
    initDynArray(&arr3, 5);
    printf("\n");
    printf("cetak array sampai angka 3\n");
    initDynArray(&arr4, 3);

    puts("\n ===== CETAK ULANG ARRAY2 =====\n\t");
    int Arr1[] = {1, 2, 3, 4, 5};
    int Arr2[] = {6, 7, 8, 9, 10};
    int Arr3[] = {21, 22, 23, 24, 25};
    int Arr4[] = {31, 32, 33, 34, 35};

    printf("Arr1= {1, 2, 3, 4, 5}\nArr2= {6, 7, 8, 9, 10}\nArr3{21, 22, 23, 24, 25}\nArr4={31, 32, 33, 34, 35}\n");

    puts("cetak ulang array data ke-1");
    printArray(Arr1, 5);
    printf("\n");
    puts("cetak ulang array data ke-2");
    printArray(Arr2, 5);
    printf("\n");
    puts("cetak ulang array data ke-3");
    printArray(Arr3, 5);
    printf("\n");
    puts("cetak ulang array data ke-4");
    printArray(Arr4, 5);
    printf("\n");
    puts("\n ===== RATA-RATA =====\n\t");
    float A,B,C,D;
    int avg1[] ={1, 2, 3, 4, 5};
    int avg2[] ={6, 7, 8, 9, 10};
    int avg3[] ={11, 12, 13, 14, 15};
    int avg4[] ={16, 17, 18, 19, 20};

    printf("\n Hasil rata-rata dari 1,2,3,4,5 : \n");
    putAverage(&A, avg1, 5);
    printf("\t%.2f", A);
    printf("\n Hasil rata-rata dari 6,7,8,9,10 : \n");
    putAverage(&B, avg2, 5);
    printf("\t%.2f", B);
    printf("\n Hasil rata-rata dari 11,12,13,14,15 : \n");
    putAverage(&C, avg3, 5);
    printf("\t%.2f", C);
    printf("\n Hasil rata-rata dari 16,17,18,19,20 : \n");
    putAverage(&D, avg4, 5);
    printf("\t%.2f", D);
    return 0;
}
