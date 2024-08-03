//return + no parameter
#include<stdio.h>
char capital_to_small()
{
    char ch;
    scanf("%c",&ch);
    return ch;
}
int main()
{
    printf("%c",capital_to_small()+32);
    return 0;
}