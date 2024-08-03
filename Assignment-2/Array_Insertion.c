#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos,value;
    scanf("%d %d",&pos,&value);
    if(pos<=0 || pos>n+1)
    {
        printf("Invalid Postion\n");
    }
    else
    {
        for(i=n-1; i>=pos-1; i--)
        {
            ar[i+1]=ar[i];
        }
        ar[pos-1]=value;
        n++;
        for(i=0; i<n; i++)
        {
            printf("%d ",ar[i]);
        }
    }
    return 0;
}