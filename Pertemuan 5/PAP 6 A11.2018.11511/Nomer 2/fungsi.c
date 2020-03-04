#include "header.h"
int search_word(char word[],char text[])
{
    int i,j,k,sama;
    int p1=strlen(text);
    int p2=strlen(word);
    for(i=0;i<p1-p2;i++)
    {
        sama=0;
         for(j=0,k=i;j<p2;j++,k++)
        {
            if(word[j]==text[k])
            {
                sama++;
            }
        }
        if(sama==p2)
        {
            return true;
        }
    }
    return false;
}
