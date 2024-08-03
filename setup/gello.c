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
            int temp = arr[i];
            arr[i] = largest;
            largest = temp;
        }
    }
    int smallest=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<smallest)
        {
            int temp = arr[i];
            arr[i] = smallest;
            smallest = temp;
        }
    }
    printf("%d %d",smallest,largest);
}
int main()
{
    int number;
    scanf("%d",&number);
    max_min(number);
    return 0;
}
