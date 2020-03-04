#include <stdio.h>
#include <stdlib.h>
#include"pustaka.h"

int main()
{
    //A11.2018.11511
    //MOCHAMAD SAIFULLAH
    printf("***** TUGAS 1 *****\n");
   int ak1,ak2;
   printf("Masukan Angka Pertama    : "); scanf("%d",&ak1);
   printf("Masukan Angka Kedua      : "); scanf("%d",&ak2);
   printf("-------------------------> %d\n\n",min2(ak1,ak2));
   printf("***** TUGAS 2 *****\n\n");
   int angka1,angka2;
   printf("Masukan Angka Pertama    : "); scanf("%d",&angka1);
   printf("Masukan Angka Kedua      : "); scanf("%d",&angka2);
   printf("-------------------------> %d\n",max2(angka1,angka2));
   printf("***** TUGAS 3 *****\n\n");
    int data1[] = {12, 15, 1, 23, 44, 21, 30};
    int data2[] = {19, 16, 22, 15, 9, 28, 11};
    int data3[] = {41, 29, 9, 14, 6, 5, 22};
    printf("\t%i \n",rec_max(data1,0,7));
    printf("\t%i \n",rec_max(data2,0,7));
    printf("\t%i \n",rec_max(data3,0,7));
    printf("\n==========================\n\n");
    printf("***** TUGAS 4 *****\n\n");
    printf("\t%i \n",rec_min(data1,0,7));
    printf("\t%i \n",rec_min(data2,0,7));
    printf("\t%i \n",rec_min(data3,0,7));
    printf("\n==========================\n\n");
    printf("***** TUGAS 5 *****\n\n");
    rec_print_all(data1,0,7);printf("\n================================\n");
    rec_print_all(data2,0,7);printf("\n================================\n");
    rec_print_all(data3,0,7);printf("\n================================\n");
    printf("***** TUGAS 6 *****\n\n");
    printf("Data 1 = %f \n" , rec_mean(data1, 0, 7));
    printf("Data 2 = %f \n" , rec_mean(data2, 0, 7));
    printf("Data 3 = %f \n" , rec_mean(data3, 0, 7));
    printf("***** TUGAS 7 *****\n\n");
    int batas;
    int i;
    batas=sizeof(data1)/sizeof(int);
    rec_selection_sort(data1,batas);// pemagilan fungsi yang dibuat tadi
    rec_selection_sort(data2,batas);
    rec_selection_sort(data3,batas);
    for(i=0;i<batas;i++)
    {
    printf("%d ",data1[i]);
    }
    printf("\n");
    for(i=0;i<batas;i++)
    {
        printf("%d ",data2[i]);
    }
    printf("\n");
    for(i=0;i<batas;i++)
    {
        printf("%d ",data3[i]);
    }




    return 0;
}
