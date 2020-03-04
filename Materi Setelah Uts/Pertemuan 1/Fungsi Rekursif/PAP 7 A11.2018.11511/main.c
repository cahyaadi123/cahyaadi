#include <stdio.h>
#include <stdlib.h>

int main()
{
    //A11.2018.11511
    //MOCHAMAD SAIFULLAH
    printf("***** TUGAS 1 *****\n");
    printf("-> %d ",add_rec(7,4));
    printf("\n\n***** TUGAS 2 *****\n");
    printf("-> %d ",subs_rec(9,2));
    printf("\n\n***** TUGAS 3 *****\n");
    printf(" -> %d ",mul_rec(2,5));
    printf("\n\n***** TUGAS 4 *****\n");
    printf("-> %d ",div_rec(30,5));
    printf("\n\n***** TUGAS 5 *****\n");
    printf("-> %d ",pow_rec(6,4));
    printf("\n\n***** TUGAS 6 *****\n");
    printf("-> %d ",factorial(5));
    printf("\n\n***** TUGAS 7 *****\n");
    int number;
    printf("Masukkan Angka: "); scanf("%d",&number);
    printf("Hasil(%d) = %d",fibonacci(number));
    printf("\n\n");
    printf("\n\n***** TUGAS 8 *****\n");
    int i;
    int data[99]={0};
    printf("\tmasukkan 0 untuk berhenti\n");
        i=0;do{
            printf("\t");
            scanf("%d",&data[i]);
            i++;
        }while(data[i-1]!=0);
        printf("\tsumTraversal(data,0) --> %d",sumTraversal(data,0));
    return 0;
}
