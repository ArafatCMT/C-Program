//function e array receive / pass 
#include<stdio.h>
void fun(int *arr,int n )//array receive er syntax: return-type name(data type *array,data type array size)
{
   for(int i=0; i<n; i++)
   {
    printf("%d ",arr[i]);
   }
}
int main()
{
    int arr[5]={10,20,30,40,50};
    fun(arr,5);
    
    return 0;
}