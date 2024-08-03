#include<stdio.h>
int linear_search(int *arr,int n, int i, int v)
{
    if(i==n)
    return -1;
    if(arr[i]==v)
    return i;
    int res=linear_search(arr,n,i+1,v);
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int q;
    scanf("%d",&q);
    for(int i=0; i<q; i++)
    {
        int v;
        scanf("%d",&v);
        int res=linear_search(arr,n,0,v);
        if(res==-1)
        {
            printf("Not Found\n");
        }
        else 
        {
            printf("%d\n",res);
        }
    }
    return 0;
}