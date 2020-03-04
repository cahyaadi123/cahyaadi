#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list1[]={1,2,3,4,5,6,7,8,9,10};
    int list2[]={4,8,6,1,10,3,9,2,7,5};
    sort_angka(list2,10);
    printf("%d, \n", binary_search1(3, list1, 10));
    printf("\n");
    printf("%d, \n", binary_search1(7, list2, 10));
    printf("\n");

}
