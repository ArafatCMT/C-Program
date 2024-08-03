#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    int min=ar[0];
    int max =ar[0];
    int min_idx , max_idx;
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        if(min > ar[i])
        {
            min =ar[i];
            min_idx=i;
        }
        if(max < ar[i])
        {
            max = ar[i];
            max_idx=i;
        }
    }
    printf("%d %d\n",min,min_idx);
    printf("%d %d",max,max_idx);
    return 0;
}