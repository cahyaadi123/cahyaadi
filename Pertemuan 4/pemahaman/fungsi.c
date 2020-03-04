#include "header.h"

void bubble_sort(int data[], int jml_data)
{
    int i,j,temp,jumlah=0,aso[jml_data];
    printf("\nData sebelum disorting\n\n");
    for(i=0;i<jml_data;i++)
    {
        printf("Data di index ke-%d\t= ",i);scanf("%d",&aso[i]);
        jumlah+=aso[i];
    }
    for(i=0;i<jml_data-1;i++)
    {
        for(j=0;j<jml_data-i-1;j++)
        {
            if(aso[j]>aso[j+1])
            {
                temp=aso[j];
                aso[j]=aso[j+1];
                aso[j+1]=temp;
            }
        }
    }
    puts("\nData setelah sorting\n\n");
    for(i=0;i<jml_data;i++)
    {
        printf("Data di index ke-%d\t= %d\n",i,aso[i]);
    }
    puts("");
    printf("jumlah angka pada data adalah %d",jumlah);

}
void identitas()
{
    puts("Nama\t\t= Akbar Karunia Octaviantono");
    puts("NIM\t\t= A11.2018.11503");
    printf("Kelompok\t= A11.4218\n\n");
}
