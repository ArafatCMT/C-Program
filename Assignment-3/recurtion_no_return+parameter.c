#include<stdio.h>
int  factorial(int n)
{
   int val;
   if(n==1)
   return n;
   val= n*factorial(n-1);
   return val;

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
    
    return 0;
}