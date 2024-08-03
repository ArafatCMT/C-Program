#include<stdio.h> 
int main()                             //0 thake 6 porjonto count korar program
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int count[x+1];
    for(int i=1; i<=x; i++)
    {
        count[i]=0;
    }           
    for(int i=1 ; i<=n; i++)
    {
        count[arr[i]]++;
    }
    for(int i=01; i<=x; i++)
    {
        printf("%d - %d\n",i,count[i]);
    }
    return 0;
}