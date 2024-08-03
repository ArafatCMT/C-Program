#include<stdio.h>
#include<string.h>
int main()
{
  char str1[1024],str2[1024];
  scanf("%s",str1);
  strcpy(str2,str1);
  int i=0, j=strlen(str2)-1;
  while (i<j)
  {
    int temp = str1[i];
    str1[i] = str2[j];
    str2[j] = temp;
    i++;
    j--;
  }
  if(strcmp(str1,str2)==0)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
  
  return 0;
}