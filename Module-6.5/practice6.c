#include<stdio.h>
int main()
{
    long long int n,m,k,a=0;
    long long int min;
    scanf("%lld %lld %lld",&n,&m,&k);
    if (n<m && n<k)
    {
        min=n;
    }
    else if(m<n && m<k)
    {
        min=m;
        
    }
    else 
    {
        min=k;
    }

    a +=min;
    n=n-min;
    m=m-min;
    k=k-min;
    n=n/2;
    if(n<k)
    {
        
        a +=n;
    }
    else
    {
       
        a +=k;
    }
    printf("%lld",a);
    return 0;
}