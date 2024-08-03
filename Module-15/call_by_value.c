#include<stdio.h>
void fun(int x)
{
    x=100;
    printf("fun er x er address - %p\n",&x);
    printf("fun er x er value - %d\n",x);
}
int main()
{
    int x=10;
    printf("main er x er address - %p\n",&x);
    printf("main er x er value - %d\n",x);
    fun(x);
    return 0;
}