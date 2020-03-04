#include <stdio.h>
#include <stdlib.h>

// NAMA     : MOCHAMAD SAIFULLAH
// NIM      : A11.2018.11511
// KELP     : A11.4218

int main()
{
    int i,jml_data;
    int data[] = {12,14,20,15,22,25,18,10,27};
    printf("Sequent Search\n\n");
    for(i=0;i<9;i++)
    {

    }
    printf("Sequent Search 15 :%s\n",sequent_search(15,data,9) ?"""True":"""False");
    printf("Sequent Search 25 :%s\n",sequent_search(25,data,9) ?"""True":"""False");
    printf("Sequent Search 39 :%s\n",sequent_search(39,data,9) ?"""True":"""False");
    printf("Sequent Search 17 :%s\n",sequent_search(17,data,9) ?"""True":"""False");
    printf("\n\n");
    printf("IS INVERSE\n\n");
    int list1[] = {1, 2, 3, 4, 5};
    int list2[] = {5, 4, 3, 2, 1};
    int list3[] = {6, 7, 8, 9, 10};

    printf("is_inverse List 1 & List 2 ?%s\n",is_inverse(list1, list2) ?" ""True":" ""False");
    printf("is_inverse List 2 & List 3 ?%s\n",is_inverse(list2, list3) ?" ""True":" ""False");
    printf("is_inverse List 1 & List 3 ?%s\n",is_inverse(list1, list3) ?" ""True":" ""False");
    printf("is_inverse List 2 & List 2 ?%s\n",is_inverse(list2, list2) ?" ""True":" ""False");

    printf("\n\n");
    printf("MIN MAX\n\n");
    int list11[] = {9, 12, 43, 13, 15};
    int list12[] = {12, 4, 19, 9, 22, 1};
    int list13[] = {8, 21, 29, 17, 20, 13};
    int list14[] = {18, 11, 19, 25, 31, 15};

    int a,b;
    min_max(list11, &a, &b,5);
    printf("Min = %d ,Max = %d\n",a,b);
    min_max(list12, &a, &b,6);
    printf("Min = %d ,Max = %d\n",a,b);
    min_max(list13, &a, &b,6);
    printf("Min = %d ,Max = %d\n",a,b);
    min_max(list14, &a, &b,6);
    printf("Min = %d ,Max = %d\n",a,b);

    printf("\n\n");
    printf("MIN MAX GAP\n\n");
    printf("min_max_gap List11: %d\n",min_max_gap(list11));
    printf("min_max_gap List12: %d\n",min_max_gap(list12));
    printf("min_max_gap List13: %d\n",min_max_gap(list13));
    printf("min_max_gap List14: %d\n",min_max_gap(list14));

    printf("\n\n");
    printf("AT LEAST\n\n");
    printf("at_least 1 ?%s\n",at_least('r', 3, "Larry Page")?" ""True":" ""False");
    printf("at_least 2 ?%s\n",at_least('m', 2, "Matt Mullenweg")?" ""True":" ""False");
    printf("at_least 3 ?%s\n",at_least('a', 2, "Mark Zuckerberg")?" ""True":" ""False");
    printf("at_least 4 ?%s\n",at_least('m', 2, "Jimmy Wales")?" ""True":" ""False");

}
