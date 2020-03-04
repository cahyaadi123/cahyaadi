#include "header.h"
int sequent_search(int angka,int data[],int jml_data)
{
    int i;
    for(i=0;i<jml_data && data[i] != angka;i++)
    {

    }
    if(i<jml_data)
    {
        return true;

    }
    else
    {
        return false;
    }
}
int is_inverse(int list1[],int list2[],int jml_data)
{
    int i;
    int static j=0;
    boolean lebih_besar1=false,lebih_besar2=false,lebih_kecil1=false,lebih_kecil2=false,cek=false;
    if(list1[j]<list1[j+1])
    {
        lebih_besar1=true;
        for(i=0;i<5-1;i++)
        {
            if(list1[i]>list1[i+1])
            {
                lebih_besar1=false;
                break;
            }
        }
    }
    else if(list1[j]>list1[j+1])
    {
        lebih_kecil1=true;
        for(i=0;i<5-1;i++)
        {
            if(list1[i]<list1[i+1])
            {
                lebih_kecil1=false;
                break;
            }
        }
    }
    if(list2[j]<list2[j+1])
    {
        lebih_besar2=true;
        for(i=0;i<5-1;i++)
        {
            if(list2[i]>list2[i+1])
            {
                lebih_besar2=false;
                break;
            }
        }
    }
    else if(list2[j]>list2[j+1])
    {
        lebih_kecil2=true;
        for(i=0;i<5-1;i++)
        {
            if(list2[i]<list2[i+1])
            {
                lebih_kecil2=false;
                break;
            }
        }
    }

    if(lebih_besar1==true&&lebih_kecil2==true)
    {
        cek=true;
    }
    else if(lebih_kecil1==true&&lebih_besar2==true)
    {
        cek=true;
    }
    else
    {
        cek=false;
    }
    return cek;
}
void min_max(int data[],int *min, int *max,int jml_data)
{
    int i;
    *min=data[0];
    *max=data[0];
    for(i=0;i<6&&data[i]!='\0';i++)
    {
        if(data[i]<*min)
        {
            *min=data[i];
        }
        else if(data[i]>*max)
        {
            *max=data[i];
        }
    }
}
int min_max_gap(int data[],int jml_data)
{
    int min,max;
    min_max(data,&min,&max,jml_data);
    return max-min;
}
int at_least(char huruf, int jml,char teks[])
{

    int i,hitung=0;
    strcpy(temp,teks);
    strlwr(temp);
    for(i=0;temp[i]!='\0';i++)
    {
        if(temp[i]==huruf)
        {
            hitung++;
        }
    }
    if(hitung==jml)
    {
        return true;
    }
    else
    {
        return false;
    }
}

