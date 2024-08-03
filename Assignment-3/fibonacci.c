#include<stdio.h>
void fibonacci(int n)
{
    int arr[51];
    arr[0]=0; 
    arr[1]=1;
    for(int i=2; i<n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    printf("%d",arr[n-1]);
}
int main()
{
    int n;
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}