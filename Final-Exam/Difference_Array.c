#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        int a[n] , b[n] , c[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        //copy element in b array
        for(int i=0; i<n; i++)
        {
            b[i] = a[i];
        }
        //ascending order
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(b[i]>b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
        //absolute difference between array A[i] and B[i]
        for(int i=0 ; i<n; i++)
        {
            c[i] = a[i] - b[i];
            if(c[i] < 0)
            {
                c[i] = c[i] * (-1);
            }
        }
        //printing c array
        for(int i=0; i<n; i++)
        {
            printf("%d ",c[i]);
        }
        printf("\n");
    }
    
    return 0;
}