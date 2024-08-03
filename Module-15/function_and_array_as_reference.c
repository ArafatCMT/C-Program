#include<stdio.h>
void fun(char *ar)
{
    printf("%s",ar);
    ar[0]='H';
    printf("\n");
}
int main()
{
    char ar[]="Sumaiya";
    fun(ar);
    printf("%s",ar);
    return 0;
}