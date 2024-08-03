#include<stdio.h>
int is_Plainedrome(int arr[],int n, int i,int j)
{
    //base case
    if(i==j || i>j)
    return 1;
    int flag=is_Plainedrome(arr,n,i+1,j-1);
    if(arr[i]!= arr[j])
    flag =0;
    return flag;
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
    int flag=is_Plainedrome(arr,n,0,n-1);
    if(flag==1)
    {
        printf("YES");
    }
    else if(flag==0)
    {
        printf("NO");
    }
    
    return 0;
}