#include<stdio.h>

void fun(int *p)
{
    *p=500;
printf("p er value - %d\n",*p);
}
int main()
{
    int x=100;
    fun(&x);
    printf("x er value - %d\n",x);
    return 0;
}