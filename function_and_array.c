#include <stdio.h>
void fun(double *ar,int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%.2lf ",*(ar+i));
  }
}
int main()
{
    double ar[5] = {10.20, 20.37, 30, 40, 50};
    fun(ar,5);
    return 0;
}