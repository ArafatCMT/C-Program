#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i=1;
    int n;
    while(i<=t)
    scanf("%d",&n);
    int a[n];
    for(int i=1; i<n+1; i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int ans=0;
    for(int i=1; i<n+1; i++)
    {
        if(a[i]==x)
        {
            ans=1;
        }
    }
    if(ans==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    i++;
    return 0;
}
