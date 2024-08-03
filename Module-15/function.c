#include<stdio.h>
void  perfect_number_check(int start,int end)
{
    printf("The perfect numbers between %d to %d are : \n",start,end);
    for(int i=start; i<=end; i++)
    {
        int sum=0;
        for(int j=1; j<i; j++)
        {
            if(i%j==0)
            {
                sum +=j;
            }
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int start,end;
    scanf("%d %d",&start,&end);
    perfect_number_check(start,end);
    return 0;
}