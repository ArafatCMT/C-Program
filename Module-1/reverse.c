#include <stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter the string :");
    scanf("%s",&str);
    strrev(str);
    printf("The reverse string : %s",str);
   return 0;
   
}