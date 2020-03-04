#include "pustaka.h"

int min2(int num1, int num2){
    if(num1<num2){
        return num1;
    }
    else {
        return num2;
    }
}
int max2(int num1,int num2){
    if(num1>num2){
        return num1;
    }
    else {
        return num2;
    }
}
int max1(int a,int b){
    if(a>b){
        return a;
    }
    else {
        return b;
    }
}
int rec_max(int data[],int cur,int arrSize){
    if(cur==arrSize-1){
        return data[cur];
    }
    else {
        return max1(data[cur],rec_max(data,cur+1,arrSize));
    }
}
int min1(int a, int b){
    if(a<b){
        return a;
    }
    else {
        return b;
    }
}
int rec_min(int data[], int cur, int arrSize){
    if(cur==arrSize-1){
        return data[cur];
    }
    else {
        return min1(data[cur],rec_min(data,cur+1,arrSize));
    }
}
void rec_print_all(int data[], int cur, int arrSize){
    if(cur==arrSize-1){
        printf("%i ",data[cur]);
    }
    else {
        printf("%i - ",data[cur]);
        return rec_print_all(data,cur+1,arrSize);
    }
}
float rec_mean(int data[], int cur, float n)
{
   if(cur>=n)
{

return 0;

}

else

{

return ((data[cur]/n)+rec_mean(data,cur+1,n));

}

}
void rec_selection_sort(int data[], int arrSize){
    if(arrSize==0){  /// basis atau tujuan berhentinya rekursif

    }
    else{
        rec_selection_sortIN(data,0,arrSize-1);
        rec_selection_sort(data,arrSize-1);
    }
}
void rec_selection_sortIN(int data[], int init, int arrSize){
    int tempp;
    int idx,idx2;
    if(init==arrSize){ /// basis atau berhentinya ulangan jika kondisi init sebagai awal sama dengan arrSize

    }
    else {
        idx=init; /// idx berisikan init jadi nilai berubah setiap perulangan
        idx2=idx+1; ///idx2 berisi nilai satu plus dari idx ini nantinya untuk membandingkan
        if(data[idx2]>data[idx]){
            idx=idx2;
        }
        tempp=data[idx];
        data[idx]=data[idx2];
        data[idx2]=tempp;
        rec_selection_sortIN(data,init+1,arrSize);  /// rekurens untuk perulangan
    }
}
