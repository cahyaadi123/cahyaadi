#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={3,5,1,2,4};
    int x,y;
//    printf("Masukkan nilai x = ");
//    scanf("%d", &x);
    for(y=0; y<5; y++){

        if (arr[y]%2==0){

            printf("array %d ada di index %d \n", arr[y],y);
        }

    }
    return 0;
}
