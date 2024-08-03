#include<stdio.h>
int main()
{   
    int n;
    scanf("%d",&n);
    long long int sum=0,result;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum +=ar[i];
    }
    if (sum<0)
    {   
        result = abs(sum);
        printf("%lld\n",result);
    }
    else 
    {
        printf("%lld\n",sum);
    }
    return 0;
}