#include "header.h"
#include <stdio.h>

void identitas()
{
    printf("MOCHAMAD SAIFULLAH\n\n");
    printf("A11.2018.11511\n\n");
    printf("A11.4218\n\n");
}
void selection_sort2(int data[],int jml_data)
{ int temp;
    int urut=0;
    for(int i=0;i<jml_data;i++)
    {
        int index=i;
        for(int j=i;j<jml_data;j++)
        {
            if(data[j]<data[index])
            {
                index=j;
            }
        }
        temp=data[i];
        data[i]=data[index];
        data[index]=temp;
        int l=0;
        for(l=0;l<jml_data;l++)
        {
            if(data[l] > data[l+1])
            {
                urut--;
            }else
            {
                urut++;
            }
        }

        for(int i=0;i<jml_data;i++)
    {
        printf("%d ",data[i]);
    }printf("\n");
    if(urut > 2)
    {
        break;
    }
    }
}
