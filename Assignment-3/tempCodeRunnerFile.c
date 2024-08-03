#include<stdio.h>
int count_before_one(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
           if(arr[0]==1)
           {
              return i;
           }
           else
           {
             return arr[i-1];
           }
        }
    }
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
    printf("%d",count_before_one(arr,n));
    return 0;
}