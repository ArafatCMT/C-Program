#include<stdio.h>
#include<string.h>
void Anagram_check(char *str)
{
    int i,j,temp;
    int length=strlen(str);
    for(i=0; i<length-1; i++)
    {
        for(j=i+1; j<length; j++)
        {
            if(str[i]>str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main()
{
    char str1[200],str2[200];
    printf("Input First String : ");
    gets(str1);
    printf("Input second String : ");
    gets(str2);
    Anagram_check(str1);
    Anagram_check(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("String are Anagram.\n");
    }
    else 
    {
        printf("String are not Anagram.\n");
    }
    return 0;
}