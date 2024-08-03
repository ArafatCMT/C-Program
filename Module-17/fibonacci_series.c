#include<stdio.h>
int fibo(int a,int b, int n,int i)
{
    //base case
    if(i==n)
    {
        return a;
    }
    int fibonacci= fibo (b,a+b,n,i+1);
    return fibonacci;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a=0 , b=1;
    int fibonacci= fibo(a,b,n,1);
    printf("%d",fibonacci);
    return 0;
}