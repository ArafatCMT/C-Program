#include<stdio.h>
#include<math.h>
int main()
{
  int tk;
  int handrad;
  int fifty;
  int twenty;
  int ten;
  int five;
  int two;
  int one;

  printf("Input the amount :");
  scanf("%d",&tk);
  

  handrad= (tk/100);
  fifty= ((tk%100)/50);
  twenty= ((tk%100)%50)/20;
  ten= (((tk%100)%50)%20)/10;
  five= ((((tk%100)%50)%20)%10)/5;
  two= (((((tk%100)%50)%20)%10)%5)/2;
  one= ((((((tk%100)%50)%20)%10)%5)%2)/1;

  printf("%d Note(s) of 100.00\n",handrad);
  printf("%d Note(s) of 50.00\n",fifty);
  printf("%d Note(s) of 20.00\n",twenty);
  printf("%d Note(s) of 10.00\n",ten);
  printf("%d Note(s) of 5.00\n",five);
  printf("%d Note(s) of 2.00\n",two);
  printf("%d Note(s) of 1.00\n",one);

  return 0;
}