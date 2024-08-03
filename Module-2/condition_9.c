#include<stdio.h>
int main()
{
    char ch;
    printf("Input character : ");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
    {
        printf("%c is character",ch);
    }
    else if (ch>='a' && ch<='z')
    {
        printf("%c is character",ch);
    }
    else
    {
        printf("not a charater");

    }
    return 0;
}