#include<stdio.h>
int main()                                    //0 thake 10 porjonto count korar program
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count[11]={0};
    for(int i=0; i<n; i++)//
    {
        count[arr[i]]++;
    }
    for(int i=0; i<=10; i++)
    {
        printf("%d :- %d\n",i,count[i]);
    }
    return 0;
}