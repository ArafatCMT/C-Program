#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=1; i<n+1; i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt[m+1];
    for(int i=1; i<=m; i++)
    {
        cnt[i]=0;
    }
    for(int i=1; i<=n; i++)
    {
       int val=a[i];
       cnt[a[i]]++;
    }
    for(int i=1; i<=m; i++)
    {
        printf("%d\n",cnt[i]);
    }
    return 0;
}