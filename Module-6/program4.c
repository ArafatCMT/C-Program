#include<stdio.h>            //find the max and min value
#include<limits.h>           //first include a header file  : #include<limits.h>
int main()
{
    int n,a;
    int max=INT_MIN, min=INT_MAX;   //max hobe sob chaye soto value r min hobe sob chaye boro value
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if (max<a)
        {
            max =a;
        }
        if(a<min)
        {
            min =a;
        }
    }
    printf("%d %d",min,max);
    return 0;
}