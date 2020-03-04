#include"header.h"

int main()
{
    //DEKLARASI
  int arr[5]={2,1,4,5,7};
  puts("\nSebelum SelectionSort\n");
  readdata(arr,5);
  selectionsort(arr,5);
  puts("");
  puts("\nSetelah SelectionSort\n");
  readdata(arr,5);
    return 0;
}
