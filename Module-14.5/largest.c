#include<stdio.h>
void max_min(int n)
{
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            int temp = arr[i];
            arr[i] = largest;
            largest = temp;
        }
    }
    int small=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]<small)
        {
            int temp = arr[i];
            arr[i] = small;
            small = temp;
        }
    }
    printf("%d %d",small,largest);
}
int main()
{
    int number;
    scanf("%d",&number);
    max_min(number);
    return 0;
}