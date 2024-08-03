#include<stdio.h>
void sort_number(int *a,int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    for(int i=0; i<n; i++)
    {
        b[i]=a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("\n%d",b[i]);
    }
}
int main()
{
    int a[3];
    sort_number(a,3);
    return 0;
}