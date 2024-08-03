#include<stdio.h>
#include<string.h>
int vowel_count (char *str,int i,int cnt)
{
    //base case
    if(str[i]=='\0')
    {
        return cnt;
    }
    else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ||
            str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    {
        cnt ++;
    }
    vowel_count(str,i+1,cnt);
}
int main()
{
    char str[201];
    fgets(str,201,stdin);
    int count =vowel_count(str,0,0);
    printf("%d",count);
    return 0;
}