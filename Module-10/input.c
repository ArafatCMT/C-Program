#include<stdio.h>
int main()
{
    char s[20];
    scanf("%s",&s);
    int sz=sizeof(s)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",s);
    
    return 0;
}