#include<stdio.h>
int factorial(int n)
{
    //base case
    if(n==0)
    return 1;
    int fact = factorial(n-1);
    return fact*n;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}