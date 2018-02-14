#include<stdio.h>
void main()
{int a,b,c;
printf("enter the three numbers-");
scanf("%d%d%d",&a,&b,&c);
if (a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
	printf("pythagorean triplet");
else 
	printf("not a pythagorean triplet");
}
