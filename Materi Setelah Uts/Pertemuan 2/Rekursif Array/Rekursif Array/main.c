#include <stdio.h>
#include <stdlib.h>

int main()
{
   int data[]= {1,2,3,5,6};
   int n = sizeof(data)/sizeof(int);

   CetakArrAsc(data,n-1);
   printf("\n\nHasil cari = %i\n",seqSearch(data,n-1,5));

    return 0;
}
