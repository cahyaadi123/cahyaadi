#include"header.h"
void cetak(int angka){
    if(angka==15){

    }
    else {
        if(angka%2==1){
            printf(" %d ",angka);
        }
        cetak(angka+1);
    }

}
void CetakGanjil(int n){
    // BASIS
    if (n==0){

    }
    // REKURENS
    else{
        //CetakGanjil(n-1); //ASCENDING
            if(n%2==1){
               // printf("%i ",n);
            }
        printf("%i ",n); //(UNTUK MENGURUTKAN)
        CetakGanjil(n-1); //DESCENDING
    }
}
