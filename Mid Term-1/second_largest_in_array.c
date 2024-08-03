#include<stdio.h>
#include<limits.h>
int main()
{
    int n;                             //optimal apporaches
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //largest and second_largest number 
    int largest=arr[0];
    int second_largest=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > second_largest)
        {
            second_largest = arr[i];
        }
    }
    //smallest and second_smallest number
    int smallest = arr[0];
    int second_smallest= INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < second_smallest)
        {
            second_smallest = arr[i];
        }
    }
    printf("%d\n%d\n%d\n%d",largest,second_largest,smallest,second_smallest);
    return 0;
}