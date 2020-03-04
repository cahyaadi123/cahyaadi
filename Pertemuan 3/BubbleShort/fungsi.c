#include "header.h"
void bublesort(int data[], int banyak)
{
    int i,j,temp;
    for (i=0;i<(banyak-1);i++)
    {
        for (j=0;j<(banyak-i-1);j++)
        {
            if (data[j]>data[j+1]) // JIKA DATA J > DATA J+1 MAKA MENJADI ASCENDING BEGITU SEBALIKNYA
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }

}
