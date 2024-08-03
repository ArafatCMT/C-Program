#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   char s[10001];
   for(int i=0; i<n; i++)
   {
      scanf("%s",s);
      int cptl=0, smll=0, dgt=0;
      for(int i=0; i<strlen(s); i++)
      {
         if(s[i]>='A' && s[i]<='Z')
         {
            cptl++;
         }
         else if(s[i]>='a' && s[i]<='z')
         {
            smll++;
         }
         else if(s[i]>='0' && s[i]<='9')
         {
            dgt++;
         }
      }
      printf("%d %d %d\n",cptl,smll,dgt);
   }
   return 0;
}