//return + parameter
#include<stdio.h>
char char_to_ascii(char c)
{
    return c; 
}
int main()
{
    char ch;
    scanf("%c",&ch);
    printf("%d",char_to_ascii(ch));
    return 0;
}