#include<stdio.h>
void sum(int x,int y)
{
    int sum= x+y;
    printf("The sum of two numbers: %d",sum);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}