#include <stdio.h>
void fun(int x)
{
    int x = 100;
    printf("x er address - %p\n", &x);
}
int main()
{
    int x = 10;
    fun(x);
    printf("%d\n", x);
    printf("x er address - %p\n", &x);
    return 0;
}