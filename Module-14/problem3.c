#include<stdio.h>
void even_odd(int x)
{
    if(x%2==0)
    {
        printf("The entered number is even\n");
    }
    else 
    {
        printf("The entered number is odd\n");
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    even_odd(x);
    return 0;
}