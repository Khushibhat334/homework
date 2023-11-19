#include<stdio.h>
void main()
{
int i,number,cube;
printf("enter the number");
scanf("%d",&number);
for(i=1;i<=10;i++)
{
cube=i*i*i;
// output statement
printf("%d=%d\n",i,cube);
}
}