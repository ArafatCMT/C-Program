#include<stdio.h>
int main()
{
    int i,n;
    printf("Input number : ");
    scanf("%d",&n);
   
   //print 1 to n naturals numbers

   for(i=1; i<=n; i++)
   {
    printf("%d\n",i);
   }

   //print 1 to n odd  numbers

   for (i=1; i<=n ; i+=2)
   {
     printf("%d\n",i);
   }

  //print 1 to n even  numbers
  for(i=2; i<=n; i+=2)
  {
    printf("%d\n",i);
  }

    return 0;
}