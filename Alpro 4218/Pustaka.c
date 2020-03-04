#include <stdio.h>

int tukar(int a, int b);

int main()
{
    int x, y, z;
    //float z;

    printf("Input x = ");scanf("%d",&x);
    printf("Input y = ");scanf("%d",&y);

    printf("\n");
    printf("Output x = %d\n",x);
    printf("Output y = %d\n",y);

    tukar(x,y);


    return 0;
}

int tukar(int a, int b)
{
    int c;
    c=a;
    a=b;
    b=c;

    printf("\n");
    printf("Output x = %d\n",a);
    printf("Output y = %d\n",b);
}
