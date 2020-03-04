#include"header.h"
#include "stdlib.h"
#include "stdio.h"

void compress_array(int data[], int jml_data)
{
    int temp;
    for (int i=0;i<jml_data;i++)
    {
        for (int j=0;j<jml_data-1;j++)
        {
            if (data[j]==0)
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    for (int i=0;i<jml_data;i++)
    {
    if (data[i]!=0)
    {
        printf("%d ",data[i]);
    }
    }
    printf("\n");
}

