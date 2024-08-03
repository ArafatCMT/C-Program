#include<stdio.h>
int main()
{
    long long int e,m,b,min;
    long long int total=0;
    scanf("%lld %lld %lld",&e,&m,&b);
    if(e<m && e<b)
    {
        min=e;
    }
    else if (m<e && m<b)
    {
        min=m;
    }
    else
    {
        min=b;
    }
    total +=min;
    e = e-min;
    m = m-min;
    b = b-min;
    e = e/2;
    if(e<b)
    {
        total +=e;
    }
    else
    {
        total +=b;
    }
    printf("%lld",total);
    return 0;
}