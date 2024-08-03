//return + parameter
#include<stdio.h>
char capital_to_small(char c)
{
    return c;
}
int main()
{
    char ch;
    scanf("%c",&ch);
    printf("%c",capital_to_small(ch)+32);
    return 0;
}