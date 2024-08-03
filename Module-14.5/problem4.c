//return + parameter
#include<stdio.h>
char small_to_capital(char c)
{
    return c;
}
int main()
{
    char ch;
    scanf("%c",&ch);
    printf("%c",small_to_capital(ch)-32);
    return 0;
}