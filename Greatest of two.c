#include<stdio.h>
void main()
{
int a,b,big;
printf("enter two numbers");
scanf("%d%d",&a,&b);
big=a>b?a:b;
printf("the greatest of two is=%d",big);
}