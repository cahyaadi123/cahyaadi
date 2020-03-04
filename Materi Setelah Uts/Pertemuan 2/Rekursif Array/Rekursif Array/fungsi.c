#include"header.h"
void CetakArrAsc(int arr[], int batas){
    ///BASIS
    if(batas==0){
            printf("[%i]",arr[0]);
    }
    ///REKUREN
    else{
             CetakArrAsc(arr,batas-1);
        printf(" [%i] ",arr[batas]);

    }
}

int seqSearch(int arr[], int batas, int cari){
    if(batas == -1){
        return 0;
    }
    else if(arr[batas] == cari){
            return 1;
        }

    else{
        return seqSearch(arr, batas-1,cari);
    }


}
