#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,jml_data;
    printf("masukkan batas :");scanf("%d",&jml_data);
    int data[jml_data];
    for (i=0;i<jml_data;i++)
    {
        printf("masukkan data: ");scanf("%d",&data[i]);
    }

    for(i=0;i<jml_data;i++)
    {
        printf(" %d ",data[i]);
    }
    printf("\n");
    selection_sort(data,jml_data);

    return 0;
}
