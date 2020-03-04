#include "header.h"
void sort_angka(int data[],int jml_data)
{
    int i,j;
    int temp;
    for(i=0;i<jml_data-1;i++)
    {
        for(j=0;j<jml_data-1-i;j++)
        {
            if(data[j]>data[j+1])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }

    }
}
int binary_search1(int angka,int data[],int jml_data)
{
    int left=0;
    int right=jml_data-1;
    int middle,i;

    while(left<=right)
    {
        for(i=left;i<=right;i++)
        {
            printf(" %d ",data[i]);
        }
        printf("\n");
        middle=floor((left+right)/2);
        if(angka==data[middle])
        {
            return angka;
        }
        else if(angka<data[middle])
        {
            right=middle-1;
        }
        else if(angka>data[middle])
        {
            left=middle+1;
        }
    }
    return angka;
}
