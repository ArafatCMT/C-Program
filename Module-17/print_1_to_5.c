#include<stdio.h>
void dispaly(int i)
{
    //base case
    if(i>10)
    return;
    printf("%d\n",i);
    dispaly(i+1);

}
int main()
{
    dispaly(1);
    return 0;
}