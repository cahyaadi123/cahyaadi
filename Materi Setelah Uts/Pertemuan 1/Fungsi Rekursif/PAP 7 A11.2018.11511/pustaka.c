#include "pustaka.h"
int add_rec(int num1, int num2){
    if(num2==0){
        printf("%d ",num1);
        return num1;
    }
    else {
        printf("1 + ");
        return 1+add_rec(num1,num2-1);
    }
}
int subs_rec(int num1, int num2){
    if(num2==0){
        printf("+ %d ",num1);
        return num1;
    }
    else {
        printf("- 1 ");
        return subs_rec(num1,num2-1)-1;
    }
}

int mul_rec(int num1, int num2){
    if(num2==1){
        printf("%d",num1);
        return num1;
    }
    else{
        printf("%d + ",num1);
        return num1+mul_rec(num1,num2-1);
    }
}

int div_rec(int num1, int num2){
    if(num1<num2){
        return 0;
    }
    else {
        printf(" - %d ",num2);
        return 1+div_rec(num1-num2,num2);
    }
}

int pow_rec(int num1, int num2){
    if(num2==0){
        return 1;
    }
    else {
        printf("%d x ",num1);
        return num1*pow_rec(num1,num2-1);
    }
}

int factorial(int num){
    if(num==0)
        return 1;
    else {
            printf("%d x ",num);
        return num*factorial(num-1);
    }
}
int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
void fibonacci(int number)
{
    if(number>1)
        fibonacci(number-1);
    printf("%d ",fibo(number));
}
int sumTraversal(int data[],int cur)
{
    if(data[cur]==0)
        return 0;
    else
        return data[cur]+sumTraversal(data,cur+1);
}
