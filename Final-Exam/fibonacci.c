#include<stdio.h>

// 1 1 2 3 5 8 13 21
// 1 2 3 4 5 6 7  8

int fibo(int n)
{
    //base case
    if(n<=2)
    {
        return n;
    }
    int num= fibo(n-1) + fibo(n-2);
    return num;
}
int main()
{
    int n;
    scanf("%d",&n);
    int num = fibo (n-1);
    printf("%d",num);
    return 0;
}