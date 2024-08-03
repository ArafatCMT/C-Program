#include<stdio.h>
int chang_it(int *array,int n)
{
    //dereference
    *(array+(n-1))=100;
}
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    chang_it(array,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}