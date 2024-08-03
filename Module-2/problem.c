#include<stdio.h>
int main()
{

    float wi1,ci1,wi2,ci2,result;
    printf("wight-item1 : ");
    scanf("%f",&wi1);
    printf("no of item1 : ");
    scanf("%f",&ci1);
    printf("wight-item2 : ");
    scanf("%f",&wi2);
    printf("no of item2 : ");
    scanf("%f",&ci2);
    result = ((wi1 * ci1) + (wi2 * ci2))/(ci1 + ci2);
    printf("Avarage Value : %f",result);
    
    


    return 0;
}