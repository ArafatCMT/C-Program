#include<stdio.h>
int main()
{
   int hour,min1,min2;
   printf("input hour : ");
   scanf("%d",&hour);
   printf("input minutes: ");
   scanf("%d",&min1);
   min2 = (60*hour)+min1;
   printf("total minutes: %d",min2);

    return 0;
}
