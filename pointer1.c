#include<stdio.h>
int main()
{
    double x=10.56;
    double *p=&x;
    printf("%p\n",x);
    printf("%p\n",*p);
    printf("%.2lf\n",p);
    printf("%.2lf\n",x);
    return 0;
}