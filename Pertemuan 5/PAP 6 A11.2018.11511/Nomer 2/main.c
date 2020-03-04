#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%s \n", search_word("Dian", "Universitas Dian Nuswantoro") ?"""True":"""False");
    printf("%s \n", search_word("Algo", "Algoritma") ?"""True":"""False");
    printf("%s \n", search_word("Program", "Pemrograman") ?"""True":"""False");
    printf("%s \n", search_word("Dinus","Dian Nuswantoro") ?"""True":"""False");
    printf("\n");
}
