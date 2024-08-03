#include<stdio.h>
int main()
{
    int x=10;
    int *ptr=&x;
    //dereference
    *ptr=50;
    printf("x er address - %p\n",&x);
    printf("x er value - %d\n",x);
    printf("ptr er value - %p\n",ptr);
    printf("ptr er address - %p\n",*ptr);
    return 0;
}