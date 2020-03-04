#include "header.h"




int text(char text[]){

    int x= strlen(text);
    puts("");
    printf("Jumlah Hurufnya adalah : %d\n",x);
    return x;
}
void maxx(int arr_num[], int n){
    int maxx = 0;
    maxx = arr_num[0];
    for(int i=0; i<n-1; i++){
        if (maxx < arr_num[i+1]){
            maxx =arr_num[i+1];
        }
    }
    puts("");
    printf("Max = %d\n", maxx);
}
