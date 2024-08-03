#include<stdio.h>
int GCD(int _1st_number,int _2nd_number)
{
    //base case
    if(_2nd_number==0)
    return _1st_number;
    int gcd = GCD(_2nd_number,(_1st_number%_2nd_number));
    return gcd;
}
int main()
{
    int first_number,second_number;
    printf("Input First Number : ");
    scanf("%d",&first_number);
    printf("Input second Number : ");
    scanf("%d",&second_number);
    int gcd=  GCD(first_number ,second_number);
    printf("The GCD of %d and %d is: %d",first_number,second_number,gcd);
    return 0;
}