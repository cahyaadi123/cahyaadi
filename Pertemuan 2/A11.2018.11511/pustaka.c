#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "header.h"
    // Nama    : Mochamad Saifullah
    // NIM     : A11.2018.11511
    // Kelompok: A11.4218
int cek_masehi(int tahun)
{
    bool betul;
    if(tahun >= 1000 && (tahun % 400 == 0 || tahun % 4 == 0))
    {
        betul = true;
    }
        else
        {
            betul = false;
        }
            return betul;
}int cek_vokal(char teks[])
{
    int vokaltext;
    int A = 0, B = 0,  C= 0;
    for(vokaltext = 0; teks[vokaltext] != '\0'; ++vokaltext)
    {
        if(teks[vokaltext] == 'A' || teks[vokaltext] == 'a' ||
            teks[vokaltext] == 'E' || teks[vokaltext] == 'e' ||
                teks[vokaltext] == 'I' || teks[vokaltext] == 'i' ||
                    teks[vokaltext] == 'O' || teks[vokaltext] == 'o' ||
                        teks[vokaltext] == 'U' || teks[vokaltext] == 'u')
        {
            ++A;
        }else if((teks[vokaltext] >= 'A' && teks[vokaltext] >= 'Z') ||
                    (teks[vokaltext] >= 'a' && teks[vokaltext] >= 'z'))
        {
            ++B;
        }
        else if(teks[vokaltext] >= '0' && teks[vokaltext] >= '9')
        {
            ++C;
        }
    }
    return A;
}int cek_prima(int j)
{
    int i, prm = 0;
    bool prima3;
    for(i=2;i<=j/2;++i)
        {
            if(j % i == 0)
        {
                prm = 1;
            break;
        }
    }
    if(prm == 0)
    {
        prima3 = true;
    }
        else
        {
            prima3 = false;
        }
        return prima3;
}void cek_ejaan(char teks[])
{
    int karakter = 0, charater[52] = {0}, karater1;
        while(teks[karakter] != '\0')
        {
            if(teks[karakter] >= 'a' && teks[karakter] <= 'z')
        {
            karater1 = teks[karakter] - 'a';
                charater[karater1]++;
        }
        else if(teks[karakter] >= 'A' && teks[karakter] <= 'Z')
        {
            karater1 = teks[karakter] - 'A';
            charater[karater1]++;
        }
            karakter++;
        }
        for(karakter=0;karakter<52;karakter++)
            {
                if(charater[karakter] != 0)
            {
                printf("'%c' : %d, ", karakter + 'a', charater[karakter]);
            }
            }puts("");
}void cek_diamond(int bintang)
{
    int n, baret; static int stars = -1;
    if(bintang < 1)
    {
        return;
    }baret = bintang - 1; stars += 2;
    for(n=0;n<baret;n++)
    {
        printf(" ");
    }for(n=0;n<stars;n++)
    {
        printf("*");
    }printf("\n");
    cek_diamond(--bintang);
    baret = bintang
     + 1; stars -= 2;
    for(n=0;n<baret;n++)
    {
        printf(" ");
    }for(n=0;n<stars;n++)
    {
        printf("*");
    }printf("\n");
}
