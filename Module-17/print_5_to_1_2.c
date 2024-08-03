#include<stdio.h>
void print_reverse(int i, int n)
{
    if (i>n) return;
    print_reverse(i+1,n);
    printf("%d ",i);

}
int main()
{
    int i,n;
    printf("strat :- ");
    scanf("%d",&i);
    printf("End :- ");
    scanf("%d",&n);
    print_reverse(i,n);
    return 0;
}