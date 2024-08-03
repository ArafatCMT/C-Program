#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Alphabet : ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='I' || ch=='U' )
       {
        printf("Vowel");
       }
    else
    {
        printf("Consonant");
    }
}