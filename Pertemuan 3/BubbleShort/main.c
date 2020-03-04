#include "header.h"





int main()
{
    // DEKLARASI (STATIS)
    int angka[]={1,4,3,8,6,9};
    bublesort(angka,6); // 6 ADALAH JUMLAH ANGKA
    int i;
    for (i=0;i<6;i++)
    {
        printf("%d, ",angka[i]);
    }
    printf("\n\n\n");
puts("");
    // DINAMIS
    int n;
    printf("Banyak Data : "); scanf("%d",&n);
    int angkaa[n];
    int p; // Fungsi untuk input angka yg ada didalam array (isi dari array)
    for (p=0;p<n;p++)
    {
        printf(""); scanf("%d",&angkaa[p]);
    }

    printf("Sesudah Sorting\n");
    bublesort(angkaa,n);
    int w;
    for (w=0;w<n;w++)
    {
        printf("%d, ",angkaa[w]);
    }
    return 0;
}
