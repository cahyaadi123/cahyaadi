#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "header.h"
    // Nama    : Mochamad Saifullah
    // NIM     : A11.2018.11511
    // Kelompok: A11.4218
int main(int argc, char * argv){
    printf("\t\t ----------------TUGAS PAP 2-------------------- \n\n");
    puts(" ");
    printf(" >>> Progam 3 File\n");
    printf("     Tugas 1 <<<\n\n");
    puts("");
    int tahun, masehi;
        printf("Masukan Tahun : "); scanf("%d", &tahun);
            masehi = cek_masehi(tahun);
                if (masehi == 1){
                    printf(" 1 (True)\n");
                }
                    else if (masehi == 0){
                        printf(" 0 (False)\n");
                    }
        printf("========================================\n");
        system("pause");
        printf(" >>> Progam 3 File\n");
        printf("     Tugas 2 <<<\n\n");
        char ejaan[50]; int banyak_vokal;
        fflush(stdin);
            printf("Masukan Vokal : "); gets(ejaan);
                banyak_vokal = cek_vokal(ejaan);
                printf("Banyak vokal : %d\n",banyak_vokal);
          printf("========================================\n");
          system("pause");
          puts("");
    printf(" >>> Progam 3 File\n");
    printf("     Tugas 3 <<<\n\n");
    puts("");
        int Bil, resul;
            printf("Masukan Bilangan : "); scanf("%d", &Bil);
                resul = cek_prima(Bil);
                    if (resul == 1){
                        printf("1 (True)\n");
                    }
                    else if (resul == 0){
                        printf("0 (False)\n");
                    }
                printf("========================================\n");
                system("pause");
        printf(" >>> Progam 3 File\n");
    printf("     Tugas 4 <<<\n\n");
    puts("");
         printf("------------------------------\n");
        char ejaan2[100]; fflush(stdin);
            printf("Masukan Ejaan : "); gets(ejaan2);
                cek_ejaan(ejaan2);
                 printf("========================================\n");
                 system("pause");
    printf(" >>> Progam 3 File\n");
    printf("     Tugas 5 <<<\n\n");
    puts("");
        printf("------------------------------\n");
            int baris1;
                printf("Masukan Banyak Barisan: "); scanf("%d", &baris1);
                puts("");
                    printf("\n");
                        cek_diamond(baris1);
                    return 0;
}
