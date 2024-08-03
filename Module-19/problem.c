#include<stdio.h>
void  base_conversion(int n)
{
    if(n==0)
    return ;
    int ans=n%2;
    base_conversion(n/2);
    printf("%d",ans);
}
int main()
{
   int t;
   scanf("%d",&t);
   while (t--)
   {
     int n;
     scanf("%d",&n);
     base_conversion(n);
     printf("\n");
   }
   
    return 0;
}