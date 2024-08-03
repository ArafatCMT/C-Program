// no return + parameter
#include<stdio.h>
void  small_to_capital(char c)
{
    printf("%c",c-32);
}
int main()
{
    char ch;
    scanf("%c",&ch);
    small_to_capital(ch);
    return 0;
}