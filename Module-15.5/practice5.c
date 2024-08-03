#include<stdio.h>
void swap_it (int *ptr1,int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int number1,number2;
    scanf("%d %d",&number1,&number2);
    swap_it(&number1,&number2);
    printf("%d %d",number1,number2);
    return 0;
}