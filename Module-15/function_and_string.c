#include<stdio.h>
#include<string.h>
void fun(char *ch)
{
    printf("%s",ch);                             //function e string pass
}
int main()
{
    char ch[20]="Arafat";
    fun(ch);
    return 0;
}