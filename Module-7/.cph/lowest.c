#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int location=1;
    for(int i=1; i<=n ; i++ )
    {
        scanf("%d",&ar[i]);
    }
    int min=ar[1];
    for(int i=1; i<=n; i++)
    {
        if(min > ar[i])
        {
            min=ar[i];
            location=i;
        }
    }
    printf("%d %d\n",min,location);
    return 0;
}