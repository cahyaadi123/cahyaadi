#include "header.h"

void selection_sort(int data[], int jml_data)
{
    int i,j,index_min;
    for(i=0;i<jml_data;i++)
    {
        index_min=i;
        for(j=i;j<jml_data;j++)
        {
            if(data[index_min]>data[j])
            {
                index_min=j;
            }

        }
         int temp;
         temp=data[index_min];
         data[index_min]=data[i];
         data[i]=temp;

         for(j=0;j<jml_data;j++){
            printf("%d ",data[j]);
         }
         printf("\n");
    }

    /*
    for(i=0;i<jml_data;i++)
    {
        printf(" %d ",data[i]);
    }
    */
}
