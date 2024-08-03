#include<stdio.h>
int main()
{  
    int a=5, b=5, c=10, result;
    //AND operation
    result = ( a==b ) && ( a<c );
    printf("( a==b ) && ( a<c ) is %d\n",result);

    result = ( a==b ) && (a>c);
    printf("( a==b ) && ( a>c ) is %d\n",result);

   //OR operation 
   result = ( a==b ) || (a>c);
   printf("( a==b ) || ( a>c ) is %d\n",result);

   result = (a != b) || (a>c);
   printf("(a != b) || ( a>c ) is %d\n",result);

   //NOT operation 
   result = !( a==b );
   printf("!( a==b ) is %d\n",result);

   result = !( a!=b );
   printf("!( a!=b ) is %d\n",result);
   return 0;
}