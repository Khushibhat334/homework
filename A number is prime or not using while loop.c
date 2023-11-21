#include<stdio.h>
void main()
{
int i,n=2,a,prime=0;
printf("enter the number");
scanf("%d",&i);
while(n<i)
{
if(i%n==0)
{
prime++;
}
n++;
}
if(prime==0)
{
printf("this number is prime");
}
else
{
printf("this number is not prime");
}
}