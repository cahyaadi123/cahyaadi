#include "header.h"

int count_arr(int data[], int jml_data){
    int countt = 0;

    for(int i=0; i<jml_data; i++){ // pengecekan
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
        printf("false\n");

    }else{
        printf("true\n");
    }

    return temp;
}
