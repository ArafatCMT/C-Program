#include<stdio.h>
void reverse_print(int *arr,int n)
{
    //base case
    if(n==0)
    return ;
    reverse_print(arr+1,n-1);//(arr+1) array er arr[1] index ke point kore ty arr[1] k dereference korce arr[1] index er value paowa jabe
    printf("%d ",*arr);
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
    reverse_print(arr,n);
    return 0;
}