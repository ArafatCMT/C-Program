// no return + parameter
#include<stdio.h>
void capital_to_small(char c)
{
    printf("%c",c+32);
}
int main()
{
    char ch;
    scanf("%c",&ch);
    capital_to_small(ch);
    return 0;
}