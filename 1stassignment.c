#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("enter a side of tringle");
	scanf("%d",&side1);
	scanf("%d",&side2);
	scanf("%d",&side3);
	if((side1==side2)&&(side2==side3)&&(side3==side1))
	{
		printf("your triangle is equilateral\nthankyou for using this");
	}
	else if(side1==side2 && side1!=side3  ||    side1==side3 && side1!=side2  ||   side2==side3 && side2!=side1)
	{
	printf("your triangle is isosceles\nthankyou for using this");
	}
	else if(side1!=side2 && side1!=side3 && side2!=side3)
	{
		printf("your tringle is scalane\nthankyou for using this");
	}
	else 
	printf("invalid");
return 0;
}
	
