#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{int a,b,c;
printf("enter the values of three sides of triangle-");
scanf("%d%d%d",&a,&b,&c);
if(a==b==c)
	printf("\n it is an equilateral triangle");
else if((a==b&&a!=c) || (a==c&&a!=b) || (c==b&&b!=a))
	printf("\n it is an isosceles triangle");
else if( (pow(a,2)==(pow(b,2)+pow(c,2))) ||	(pow(b,2)==(pow(a,2)+pow(c,2))) ||	(pow(c,2)==(pow(a,2)+pow(b,2))) )
	printf("\n it is a right angled triangle");
else printf("none");

}
