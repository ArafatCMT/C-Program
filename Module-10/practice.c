#include<stdio.h>
#include<string.h>//string header file
int main()
{
    char S[1001],T[1001];
    scanf("%s %s",&S,&T);
    int lenS=strlen(S), lenT=strlen(T); //string er length bair korar jonno: strlen() , build in function baboher kora hoi
    printf("%d %d\n",lenS,lenT);
    printf("%s %s\n",S,T);

    return 0;
}