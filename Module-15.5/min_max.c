#include<stdio.h>
#include<limits.h>
void max_min(int n)
{
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
           largest=arr[i];
           
        }
    }
    int smallest=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("%d %d\n",smallest,largest);
}
int main()
{
    int number;
    scanf("%d",&number);
    max_min(number);
    return 0;
}