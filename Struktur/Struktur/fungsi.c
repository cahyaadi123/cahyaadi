#include "header.h"
void cetak(mahasiswa m){
    puts("========");
    printf("absen = %i\n",m.absen);
    printf("Nilai = %i\n",m.nilai);
}
void inputArr(mahasiswa m[], int banyakMhs){
    int i;
    for(i=0;i<banyakMhs;i++){
        m[i].absen =i+1;
        printf("absen ke-%i\n",i+1);
        printf("nilai = "); scanf("%i",&m[i].nilai);
    }
}
void outputArr(mahasiswa m[], int banyakMhs){
      int i;
    for(i=0;i<banyakMhs;i++){
        printf("Absen ke-%i\n",m[i].absen);
        printf("Mendapat Nilai = %i\n",m[i].nilai);
    }
}
void ctk(mahasiswa*m){
    printf("absen = %i\n",m->absen);
    printf("Nilai = %i\n",m->nilai);
}

