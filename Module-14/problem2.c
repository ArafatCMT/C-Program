#include<stdio.h>
void swap(int x, int y)
{
    printf("After swapping: n1 = %d , n2 = %d\n",x,y);
}
int main()
{
    int n1;
    printf("Input 1st number : ");
    scanf("%d",&n1);
    int n2;
    printf("Input 2nd number : ");
    scanf("%d",&n2);
    printf("Before swapping: n1 = %d , n2 = %d\n",n1,n2);
    swap(n2,n1);
    return 0;
}