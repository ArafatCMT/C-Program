#include<stdio.h>
int main()
{
   int i,n;
   printf("Enter the number : ");
   scanf("%d",&n);

   //1 to n odd number

   for (i=1; i<=n; i +=2)
   {
     printf("%d\n",i);
   }

   //print Hello 5 times

   for(i=1; i<=5; i++)
   {
     printf("Hello\n");
   }
    
    // 1 to n even numbr
    for(i=2; i<=n; i +=2)
    {
        printf("%d\n",i);
    }
    return 0;
}