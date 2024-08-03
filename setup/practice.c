#include<stdio.h>
int main()
{
  int i,n;
  printf("number: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
      if(i%5==0)
      {
          printf("%d Yes",i);
      }
      else
      {
          printf("%d No",i);
      }
  }
  return 0;
}
