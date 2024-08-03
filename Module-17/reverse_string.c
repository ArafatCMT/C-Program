#include<stdio.h>
void reverse_string(char *s,int i)
{
    //base case
    if(s[i]=='\0')
    return;
    reverse_string(s,i+1);
    printf("%c",s[i]);    
}
int main()
{
    char s[150];
    scanf("%s",s);
    reverse_string(s,0);
    return 0;
}