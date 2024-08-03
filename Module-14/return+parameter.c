#include<stdio.h>
int sum (int x, int y)
{
    int sum= x+y;
    return sum;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int add=sum(a,b);
    printf("the sum is :%d",add);
    return 0;
}
