//return + no parameter
#include<stdio.h>
char char_to_ascii()
{
    char ch;
    scanf("%c",&ch);
    return ch;
}
int main()
{
    char value=char_to_ascii();
    printf("%d",value);
    return 0;
}