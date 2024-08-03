#include<stdio.h>
#include<string.h>
void fun(char *str1)
{
    // int len=strlen(str1);
    *(str1)='S';
     printf("%s",str1);
//   for(int i=0; i<=len; i++)
//   {
//     printf("%c",str1[i]);
//   }
}
int main()
{
    char str1[]="Arafat";
    fun(str1);
    return 0;
}