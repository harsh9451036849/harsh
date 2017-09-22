#include<stdio.h>
int main()
{	
	int a,b,c,d;
	printf("please enter your first number");
	scanf("%d", &a);
	printf("please enter your second number");
	scanf("%d", &b);
	printf("please enter your third number");
        scanf("%d", &c);
	if (a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b)
	{
	printf("your numbers are pythagoras triplet\nTHANKYOU");
	}
	else 
	{
	printf("your numbers are not pythagoras triplet\nTHANKYOU");
	}	
	return 0;
}
