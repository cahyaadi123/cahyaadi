#include"header.h"

int sequential_search(int data[],int jml_data,int cari)
{
   int i;
   for(i=0;i<jml_data && data[i] != cari;i++)
   {

   }
   if (i<jml_data)
   {
       return 1; //TRUE
   }
   else
   {
       return 0; // FALSE
   }
}
