#include<stdio.h>
int main()
{
    int n,q;
    scanf("%d %d",&n,&q);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        int flag=0;
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    int x[q];
    for(int i=0; i<q; i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0; i<q; i++)
    {
       int start=0 , end=n-1;
       int flag=0;
       while(start <= end)
       {
        int mid = (start+end)/2;
        if(a[mid] == x[i])
        {
            flag=1;
            break;
        }
        else if(a[mid] > x[i])
        {
            end = mid-1;
        }
        else 
        {
            start= mid+1;
        }
       }
       if(flag==1)
       {
        printf("found\n");
       }
       else
       {
        printf("not found\n");
       }
    }
    return 0;
}