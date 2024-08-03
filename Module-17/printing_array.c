#include<stdio.h>
void dispaly(int *arr,int n, int i)
{
    //base case
    if(i==n)
    return;
    printf("%d\n",arr[i]);
    dispaly(arr,n,i+1);
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
    dispaly(arr,n,0);
    return 0;
}