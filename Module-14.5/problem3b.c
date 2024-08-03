// no return + parameter
#include<stdio.h>
void char_to_ascii(char c)
{
    printf("%d",c);
}
int main()
{
    char ch;
    scanf("%c",&ch);
    char_to_ascii(ch);
    return 0;
}