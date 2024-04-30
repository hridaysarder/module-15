#include<stdio.h>
int main()
{
    int x=10;
    int *p=&x;
    int *ptr2=p;
    x=100;
    printf("%p\n",x);
    printf("%p\n",*p);
    printf("%d\n",*p);
    printf("%d\n",x);
    printf("%p\n",ptr2);
    printf("%d\n",*ptr2);
    return 0;
}