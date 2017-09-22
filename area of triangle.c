#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,s,h;
		printf("please enter the sides of triangle");
		scanf("%f", &a);
		scanf("%f", &b);
		scanf("%f", &c);
	s=(a+b+c)/2;
	h=sqrt((s*(s-a)*(s-b)*(s-c)));
	if(a+b>c&&b+c>a&&a+c>b)
	{
	printf("%f",h);	
	}
	else
	{printf("tringle does not exist");}
	
	return 0;
}
