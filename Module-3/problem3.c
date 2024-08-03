#include<stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("Input 10 numbers: ");
    scanf("%d",&n);

    for(i=1; i<=n; i+=1)
    {
        sum +=i;
        printf("number-%d : %d\n",i,i);
        //printf("The sum is : %d\n",sum);
    }
   
     printf("The sum is : %d\n",sum);
     avg=sum/i;
     printf("The average is : %f",avg);
    return 0;
}