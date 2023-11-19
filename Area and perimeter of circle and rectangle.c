#include<stdio.h>
#include<math.h>
void main()
{
int l=44,b=56,area;
float r;
area=l*b;
printf("The area of rectangle=%d\n",area);
r=sqrt(area/3.14);
float perimeter;
perimeter=3.14*2*r;
printf("perimeter of circle=%f\n",perimeter);
}