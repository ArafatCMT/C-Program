#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int a=2,b=0,c=1;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<n; i++)
    {
        if (ar[i]<0)
        {
            ar[i]=a;
        }
        else if (ar[i]>0)
        {
            ar[i]=c;
        }
        else
        {
            ar[i]=b;
        }
        printf("%d ",ar[i]);
    }
    return 0;
}