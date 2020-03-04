#include "header.h"
void char_frequency(char text[], int jumlah[])
{
    int panjang=strlen(text);
    int a,b;
    char abjad='a', Abjad='A';
    for(a=0;a<26;a++)
    {
        jumlah[a]=0;
    }

    for(a=0;a<panjang;a++)
    {
        abjad='a';
        Abjad='A';
        for(b=0;b<26;b++,abjad++,Abjad++)
        {
            if(text[a]==abjad||text[a]==Abjad)
            {
                jumlah[b]++;
            }
        }
    }
}

int is_anagram(char text1[],char text2[])
{
    int jumlah1[26];
    int jumlah2[26];
    int i;
    char_frequency(text1,jumlah1);
    char_frequency(text2,jumlah2);

    for(i=0;i<26;i++)
    {
        if(jumlah1[i]!=jumlah2[i])
        {
            return false;
        }
    }
    return true;
}
