#include "header.h"

void identitas(){
    printf("Nama    = Mochamad Saifullah\n");
    printf("Nim     = A11.2018.11511\n");
    printf("Kelp    = A11.4218\n");
}
  void swapping(int input1,int input2, int input3)
  {
    printf("Masukan angka 1 = "); scanf("%d",&input1);
    printf("Masukan angka 2 = "); scanf("%d",&input2);
        if (input1%2==1 || input2%2==1)
    {
            input3=input1;
            input1=input2;
            input2=input3;
    }
    puts(" ");
    printf("Hasil Swapping = %d %d",input1,input2);
  }

