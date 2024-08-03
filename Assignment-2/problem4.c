#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int sum=0,sub=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(ar[i]>0)
        {
            sum +=ar[i];
        }
        else
        {
            sub +=ar[i];
        }
    }
    printf("%d %d\n",sum,sub);
    return 0;
}