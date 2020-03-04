#include "header.h"
int Hasil(int pjg,int lbr,int tng)
{
    int hasil;
    hasil=pjg*lbr*tng;
    return hasil;
}
void identitas(){
    printf("Nama = Mochamad Saifullah\n");
    printf("Nim  = A11.2018.11511\n");

}
 void cetakumur(int umur){
     printf("Umur = %d\n",umur);

 }
  void swapping(int angka1,int angka2){
      int temp;
      temp=angka1;
      angka1=angka2;
      angka2=temp;

      printf("Angka1 = %d\n",angka1);
      printf("Angka2 = %d\n",angka2);

  }
