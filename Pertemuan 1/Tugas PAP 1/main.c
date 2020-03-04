#include <stdio.h>
#include <stdlib.h>

int jumlah(int a, int b);
int jumlah(int d, int e);
int a,b,c,d,e,f;
float hitung(int numl,int num2, char operator);


void main()
{
    printf("\t\t\t***** TUGAS PAP 1 *****\n");
    printf("\t\tNama : Mochamad Saifullah\n");
    printf("\t\tNim  : A11.2018.11511\n");

    puts(" ");
    printf(" >>> Progam 1 File\n");
    printf("     Tugas 1 <<<");
    puts(" ");
    char nim[14];
    char nama[35];
    char alamat[35];
    strcpy(nim, "A11.2018.11511");
    strcpy(nama,"Mochamad Saifullah");
    strcpy(alamat,"Pekalongan");
    printf("============================\n");
    printf("Nim    : %s \n",nim);
    printf("Nama   : %s \n",nama);
    printf("Alamat : %s \n",alamat);
    printf("=============================\n");
    puts("");
    printf(" >>> Progam 1 File\n");
    printf("     Tugas 2 <<<\n");
    printf("Masukan Nilai A = "); scanf("%d",&a);
    printf("Masukan Nilai B = "); scanf("%d",&b);

    c=jumlah(a,b);
    printf("Hasil Penjumlahan %d + %d = %d \n",a,b,c);
    puts("");
    printf("Masukan Nilai C = "); scanf("%d",&d);
    printf("Masukan Nilai D = "); scanf("%d",&e);

    f=jumlah(d,e);
    printf("Hasil Penjumlahan %d + %d = %d\n",d,e,f);
    puts("");
    printf(" >>> Progam 1 File\n");
    printf("     Tugas 3 <<<\n");

    float hasil = hitung(13,3,'+');
    printf("\n%d %c %d = %2.2f\n",13,'+',3,hasil);
    hasil = hitung(13,3,'-');
    printf("\n%d %c %d = %2.2f\n",13,'-',3,hasil);
    hasil = hitung(13,3,'*');
    printf("\n%d %c %d = %2.2f\n",13,'*',3,hasil);
    hasil = hitung(13,3,'/');
    printf("\n%d %c %d = %2.2f\n",13,'/',3,hasil);

    return 0;
}
int jumlah(int x, int y){
return(x+y);
}
float hitung(int num1,int num2, char operator)
{
    float hasil;
    if (operator=='+')
    {
        hasil=num1+num2;
    }
    else if (operator=='-')
    {
        hasil=num1-num2;
    }
    else if (operator=='/')
    {
        hasil=num1/num2;
    }
    else if (operator=='*')
    {
        hasil=num1*num2;
    }
    return hasil;
}
