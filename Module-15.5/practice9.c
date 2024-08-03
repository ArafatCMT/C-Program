#include<stdio.h>
int main()
{
    int arr[3];
    for(int i=0; i<3; i++)
    {
        scanf("%d",&arr[i]);
    }
    int A=arr[0];
    int B=arr[1];
    int C=arr[2];
    for(int i=0; i<3-1; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n%d\n%d\n%d",A,B,C);
    return 0;
}