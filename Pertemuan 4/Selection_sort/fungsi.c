#include "header.h"
void readdata(int arr[], int n)
{
  int i;
  for (i=0;i<n;i++)
  {
      printf("%d",arr[i]);
  }
}


void selectionsort(int arr[],int n)
{
    int i,j,temp,indxmin;
    for(i=0;i<n;i++)
    {
        indxmin=i;
        for(j=i;j<n;j++)
        {
            if(arr[indxmin]>arr[j])
            {
                indxmin=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[indxmin];
        arr[indxmin]=temp;
    }

}
