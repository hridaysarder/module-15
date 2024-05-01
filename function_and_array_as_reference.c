#include <stdio.h>
void fun(char *ar)
{
   ar[0]='R';
}
int main()
{
    char ar[] = "Hriday";
    fun(ar);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", ar[i]);
    // }
    printf("%s",ar);
    return 0;d
}