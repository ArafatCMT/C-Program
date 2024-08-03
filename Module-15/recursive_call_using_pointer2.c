#include<stdio.h>
#include<string.h>
void reverse_string(char *s)
{
    if(strlen(s)==0)
    return; 
    reverse_string(s+1);
    printf("%c ",*s);
}
int main()
{
    char s[250];
    scanf("%s",s);
    reverse_string(s);
    return 0;
}