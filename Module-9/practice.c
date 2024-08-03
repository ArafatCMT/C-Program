#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos,value;
    scanf("%d %d",&pos,&value);
    if(pos<0 || pos>n+1)
    {
        printf("Invalid Positon\n");
    }
    else
    {
        for(int i=n-1; i>=pos; i--)
        {
            ar[i+1]=ar[i];
        }
        ar[pos]=value;
        for(int i=0; i<n+1; i++)
        {
            printf("%d ",ar[i]);
        }
    }

    return 0;
}