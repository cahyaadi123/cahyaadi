#include"pustaka.h"
void swapValue (int *num1, int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}
void changevalue(int *target, int num1, int num2)
{
    *target=num1+num2;
}
void initDynArray(int *arrData, int size)
{
    int x;
    for(x=0;x<size;x++)
    {
        arrData[x]=x+1;
        printf("%d, ",arrData[x]);
    }
}
void printarray (int *arrdata, int size)
{
    int s;
    for(s=0;s<size;s++)
    {
        if(s==size-1)
            printf("%d ",arrdata[s]);
        else
            printf("%d - ",arrdata[s]);
    }
}
void putaverage(float *avg, int *arrdata, int size)
{
    int e, w=0;
    for(e=0;e<size;e++)
    {
        w+=arrdata[e];
    }
    *avg=(float)w/size;
}
