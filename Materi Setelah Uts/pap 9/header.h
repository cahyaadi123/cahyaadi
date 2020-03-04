#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
void swapvalue(int *num1, int *num2);
void changevalue(int *target,int num1, int num2);
void initDynArray(int *arrData, int size);
void printArray(int *arrData, int size);
void putAverage(float *avg, int *arrData, int size);
#endif // HEADER_H_INCLUDED
