#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#define true 1
#define false 0
#define boolean unsigned char
#include <stdio.h>
#include <stdlib.h>
void knvrs_karakter(char text[100]);
char temp[100];
int temp2[100];
int sequent_search(int angka,int data[],int jml_data);
int is_inverse(int list1[],int list2[],int jml_data);
void min_max(int data[],int *min, int *max,int jml_data);
int min_max_gap(int data[],int jml_data);
int at_least(char huruf, int jml,char teks[]);




#endif // HEADER_H_INCLUDED
