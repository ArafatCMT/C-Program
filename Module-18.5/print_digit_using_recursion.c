#include<stdio.h>
void print_digit(int *arr, int n,int i)
{
    if(i==n) return ;
    int rem[1024];
    int cnt=0;
    for(int j=0; arr[i]>0; j++)
    {
        rem[j] = arr[i]%10;
        arr[i] = arr[i]/ 10;
        cnt++;
    }
    for(int j=cnt-1; j>=0; j--)
    {
        printf("%d ",rem[j]);
    }
    printf("\n");
    print_digit(arr,n,i+1);
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
    print_digit(arr,n,0);
    return 0;
}