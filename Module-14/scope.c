#include<stdio.h>
//global variable
int g=15;
void fun(void)
{
    int x=10;
    printf("fun er address : %p\n",&x);
}
int main()
{
    int x=20;
    fun();
    printf("main er address : %p\n",&x);
    printf("%d\n",g);
    return 0;
}