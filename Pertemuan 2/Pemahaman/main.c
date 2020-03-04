#include "header.h"

int main()
{
    //FUNGSI
    int pjg,lbr,tng;

    printf("Masukan Panjang : "); scanf("%d",&pjg);
    printf("Masukan Lebar   : "); scanf("%d",&lbr);
    printf("Masukan Tinggi  : "); scanf("%d",&tng);

    printf("Hasil = %d \n",Hasil(pjg,lbr,tng));
puts("");
    // PROSEDUR
    identitas();
    cetakumur(20);
    swapping(12,11);
puts("");
    char huruf [10]="Udinus";
    printf("Huruf Kapital %s \n",strupr(huruf));
    printf("Huruf Kecil %s \n",strlwr(huruf));
    printf("Hitung Huruf %d \n",strlen(huruf));
    return 0;
}
// SOAL 2 MEMBUAT PROSEDUR IDENTITAS
