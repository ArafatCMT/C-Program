#include<stdio.h>
void dispaly(int i)
{
    if(i>50) return;
    printf("%d ",i);
    dispaly (i+1);
}
int main()
{
    dispaly(1);
    return 0;
}