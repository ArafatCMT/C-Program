#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    int sz=strlen(s);
    char Ans1[4]="YES";
    char Ans2[3]="NO";
    int i=0, j=sz-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            strcpy(Ans1,Ans2);
            break;
        }
        else
        {
            i++;
            j--;
        }
    }
    printf("%s",Ans1);
    return 0;
}