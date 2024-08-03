#include<stdio.h>
int calculation(int eye,int mouth,int body)
{
    int minimun;
    if((eye<mouth)&&(eye<body))
    minimun=eye;
    else if((mouth<eye)&& (mouth<body))
    minimun=mouth;
    else
    minimun=body;
    eye=eye-minimun;
    mouth=mouth-minimun;
    body=body-minimun;
    eye=eye/2;
    if(eye<body)
    minimun=minimun+eye;
    else
    minimun=minimun+body;
    return minimun;
}
int main()
{
    int eye,mouth,body;
    scanf("%d %d %d",&eye,&mouth,&body);
    int total=calculation(eye,mouth,body);
    printf("%d",total);
    return 0;
}