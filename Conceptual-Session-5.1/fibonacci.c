#include<stdio.h>
int fibo (int a,int b, int n,int i)
{
    if(i==n)
    return a;
    a=fibo(b,a+b,n,i+1);
    return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    int fibonacci= fibo(1,1,n,1);
    printf("%d\n",fibonacci);
    return 0;
}