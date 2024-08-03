#include<stdio.h>
void reverse (int i,int n)
{
    //base case 
    if(i<n) return;
    printf("%d ",i);
    reverse (i-1,n);
    printf("%d ",i);
}
int main()
{
    int i,n;
    printf("Start :- ");
    scanf("%d",&i);
    printf("End :- ");
    scanf("%d",&n);
    reverse(i,n);
    return 0;
}