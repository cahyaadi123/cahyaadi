#include"header.h"

void identitas()
{
    printf("\tMOCHAMAD SAIFULLAH\n\n");
    printf("\tA11.2018.11511\n\n");
}
void selection_sort1(int data[], int jml_data)
{
    int temp;
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
        for(int i=0;i<jml_data;i++)
        {
            printf("%d ",data[i]);
        }printf("\n");
    }



}
