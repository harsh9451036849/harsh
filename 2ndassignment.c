#include<stdio.h>
 int main()
{
	float a,b,c,e,d,g,h;
	printf("please enter your cost price");
	scanf("%f",&a);
	printf("please enter your selling price");
	scanf("%f",&b);
	c=b-a;
	e=a-b;
	d=(c*100/a);
	g=(e*100/a);
	if(a>b)
	{
	printf("your loss percentage is");
	printf("%f",g);
	}	
	else if(b>a)
	{
	printf("your profit percentage is");
	printf("%f",d);	
	}
	else
	{
	printf("invalid data");
	}
	return 0;
}
