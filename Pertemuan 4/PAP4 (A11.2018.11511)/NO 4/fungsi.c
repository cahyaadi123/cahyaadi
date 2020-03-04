#include"header.h"

void identitas()
{
    printf("MOCHAMAD SAIFULLAH\n\n");
    printf("A11.2018.11511\n\n");
    printf("A11.4218\n\n");
}
int get_median(int data[], int jml_data)
{
    int temp;
    int tengah;
    for (int i=0;i<jml_data-1;i++)
    {
        for (int j=i+1;j<jml_data;j++)
        {
            if (data[i]>data[j])
            {
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }

    if (jml_data%2==0)
    {
        tengah=(data[(jml_data-1)/2]+data[((jml_data-1)/2)+1])/2;
        printf(" %d\n",tengah);
    }
    else
    {
        tengah=data[jml_data/2];
    printf(" %d\n",tengah);
    }
}
