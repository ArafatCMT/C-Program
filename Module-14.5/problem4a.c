//return + no parameter
#include<stdio.h>
char small_to_capital()
{
    char ch;
    scanf("%c",&ch);
    return ch;
}
int main()
{
    printf("%c",small_to_capital()-32);
    return 0;
}