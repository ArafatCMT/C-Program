#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos;
    scanf("%d",&pos);
    if(pos<0 || pos>n)
    {
        printf("Invalid Postion\n");
    }
    else
    {
    for(int i=pos+1; i<n; i++)//pos=1
    {
        ar[i-1]=ar[i];
    }
    for(int i=0; i<n-1; i++)
    {
        printf("%d ",ar[i]);
    } 
    }
    return 0;
}