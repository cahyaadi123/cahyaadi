#include "pustaka.h"


int count_arr(int data[], int jml_data){
    int countt = 0;

    for(int i=0; i<jml_data; i++){
        if(data[i] != NULL){
             countt++;
        }
    }
    return countt;
}
int cek_urut(int data[], int jml_data){
    int temp = 0;

    for(int i=0; i<(jml_data-1); i++){
        if(data[i] > data[i+1]){
            temp = 0;
            break;
        }
        else{
            temp = 1;
        }
    }

    if(temp == 0){
        printf("False\n");

    }else{
        printf("True\n");
    }

    return temp;
}
void bubble_sort1(int data[],int jml_data)
{
    int cetak;
    int n,temp;
    n=jml_data;
    for(cetak=0;cetak<n;cetak++)
    {
        printf(" %d ",data[cetak]);
    }printf("\n");

    for(int i=0;i<(n-1);i++)
    {
        for (int j=0;j<(n-1);j++)
        {
            if (data[j+1]<data[j])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
        for (cetak=0;cetak<n;cetak++)

        {
            printf(" %d ",data[cetak]);
        }
        printf("\n");
    }

}
int bubble_sort2(int data[], int jml_data)
{
  int i,j,cetak,m,tempp;
    m=jml_data;
    for(cetak=0;cetak<m;cetak++)
    {
        printf(" %d ",data[cetak]);
    }printf("\n");

    bool swapped=false;
    for(int j=0;j<(m-1);j++)
    {
            if (data[j+1]<data[j])
            {
                tempp=data[j];
                data[j]=data[j+1];
                data[j+1]=tempp;
                swapped=true;
            }
    }
        for (cetak=0;cetak<m;cetak++)

        {
            printf(" %d ",data[cetak]);
            if (swapped)
                break;
        }
        printf("\n");
    }


