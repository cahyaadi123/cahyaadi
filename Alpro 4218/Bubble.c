#include <stdio.h>

int main()
{

    int i,j,batas;
    int temp;
    printf("Masukkan batas : ");
    scanf("%d",&batas);
    int ar[batas];
    if (batas%2==1)
    {
             for (i=0;i<batas;i++)
        {
            printf("Masukkan data ke-[%d] : ",i);
            scanf("%d",&ar[i]);
        }
    }

    else{
            printf("\n");
        printf("Maaf, inputan harus ganjil\n");
        return 0;
    }


    for(i=0;i<batas;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");

    for(i=0;i<batas-1;i++)
    {
        for(j=0;j<batas;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
            printf("%d ",ar[j]);
        }
        printf("\n");

    }

    printf("\n");
    for(i=0;i<batas;i++)
    {
        if(ar[i]%2==0)
        printf("%d ",ar[i]);
    }


    return 0;
}
