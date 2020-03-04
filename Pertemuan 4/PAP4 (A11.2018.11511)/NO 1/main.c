#include"header.h"
#include <stdio.h>
#include <stdlib.h>
//NAMA      : Mochamad Saifullah
//NIM       : A11.2018.11511
//KELP      : A11.4218
int main()
{
   int arr1[] = {3,5,38,0,44,47};
   int arr2[] = {3,0,44,38,0,5,47};
   int arr3[] = {2,15,0,0,0,26,27,36};
   int arr4[] = {15,36,27,0,0,2,26};

   compress_array(arr1,6);
   compress_array(arr2,7);
   compress_array(arr3,8);
   compress_array(arr4,7);

    return 0;
}
