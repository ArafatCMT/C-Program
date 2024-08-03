#include<stdio.h>
void binary(int n)
{
    int arr[100],i;
    for(i=0; n>0; i++)
    {
        arr[i] = n%2 ;
        n = n/2;
    }
    printf("The Binary value is : ");
    for(int j=i-1; j>=0; j--)
    {
        printf("%d",arr[j]);
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    binary(x);
    return 0;
}