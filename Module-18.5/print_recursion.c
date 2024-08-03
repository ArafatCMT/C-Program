#include<stdio.h>
void display(int n)
{
    if(n<1) return;
    printf("I love Recursion\n");
    display(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    display(n);
    return 0;
}