#include<stdio.h>
int main()
{
   int i,n,sum=0;
   printf("input number of trems : ");
   scanf("%d",&n);
   printf("Input number of terms : ");
   for(i=1; i<=n; i++)
   {
     printf("%d ",2*i-1);
     sum +=2*i-1;
   }
   printf("\nThe Sum of odd Natural Number upto %d terms : %d ",n,sum);

    return 0;
}