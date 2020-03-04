#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
typedef struct mhs {
    int absen;
    int nilai;
}mahasiswa;
typedef int angka;

void cetak(mahasiswa m);
void inputArr(mahasiswa m[], int banyakMhs);
void outputArr(mahasiswa m[], int banyakMhs);
void ctk(mahasiswa*m);
#endif // HEADER_H_INCLUDED
