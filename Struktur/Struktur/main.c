#include "header.h"
int main()
{
//    /// tipe data primitif int, float, char
//    int a;
//    a = 7;
//    angka pertama; /// = int pertama
//
//    /// tipe data bentukan
//    mahasiswa aku;
//    aku.absen=1;
//    aku.nilai=99;
//
//    printf("absen aku = %i\n",aku.absen);
//    printf("Nilai aku = %i\n",aku.nilai);
//
//    mahasiswa dia;
//    printf("Masukan absen dia = "); scanf("%i",&dia.absen);
//    printf("Masukan nilai dia = "); scanf("%i",&dia.nilai);
//    printf("\n===== OUTPUT CETAK MAIN =====\n");
//    printf("Absen dia = %i\n",dia.absen);
//    printf("Nilai dia = %i\n",dia.nilai);
//    printf("\n===== OUTPUT CETAK VOID FUNGSI =====\n");
//    cetak(dia);
//
//    /// struct array
//    mahasiswa a114000[5];
//    inputArr(a114000,5);
//    puts("****************");
//    outputArr(a114000,5);
//
//puts("=======================");
//
//    mahasiswa b;
//    b.absen=11;
//    b.nilai=99;
//
//    mahasiswa *p;
//    p=&b;
//    printf("nilai p = %i\n",(*p).nilai);
//    printf("absen p = %i\n",(*p).absen);
//    ///ATAU BISA JUGA SEPERTI INI
//    puts("");
//    printf("nilai p = %i\n",p->nilai);
//    printf("absen p = %i\n",p->absen);

    ///BILA POINTER BELUM MEMPUNYAI TUJUAN ?
    mahasiswa *po;
    po=(mahasiswa*)malloc(sizeof(mahasiswa));
    (*po).absen=212;
    po->nilai=100;
    ctk(po);

    return 0;
}
