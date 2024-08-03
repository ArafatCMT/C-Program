#include<stdio.h>
long long int fact(int n)
{
    //base case
    if(n==1) return n;
    long long int ans=fact(n-1);
    return ans*n;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int  factorial=fact(n);
    printf("%lld",factorial);
    return 0;
}