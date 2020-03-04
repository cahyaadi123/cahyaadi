#include"header.h"

void selection(int data[],int jml_data)
{
    int i,j,temp,indxmin;
    for(i=0;i<jml_data;i++)
    {
        indxmin=i;
        for(j=i;j<jml_data;j++)
        {
            if(data[indxmin]<data[j])
            {
                indxmin=j;
            }
        }
        temp=data[i];
        data[i]=data[indxmin];
        data[indxmin]=temp;
    }

}
