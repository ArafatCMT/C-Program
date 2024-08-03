#include<stdio.h>
#include<string.h>
void modify(char *str1, char *str2)
{
    str2[0]='+';
    printf("lenght of str1 is :%d\n",strlen(str1));
    printf("%s%s\n",str1,str2);
}
int main()
{
    char str1[]="Arafat";
    char str2[]=" Sumaiya";
    modify(str1,str2);
    return 0;
}