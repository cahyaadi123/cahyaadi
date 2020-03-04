#include "header.h"



int main()
{
    int angka1,angka2;
    printf("Masukan angka1 = "); scanf("%d",&angka1);
    printf("Masukan angka2 = "); scanf("%d",&angka2);
    printf("\tHasil pertambahan = %d ",tambah(angka1,angka2));
printf("\n");
    int angka3,angka4;
    printf("Masukan Angka3 = "); scanf("%d",&angka3);
    printf("Masukan Angka4 = "); scanf("%d",&angka4);
    printf("\tHasil Perkalian = %d ",kali(angka3,angka4));

printf("\n");
    int a,b;
    printf("Masukan Nilai a= "); scanf("%d",&a);
    printf("Masukan Nilai b= "); scanf("%d",&b);
    printf("\tNilai maksimum = %d ",max2(a,b));
    return 0;
}

