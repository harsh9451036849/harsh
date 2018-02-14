#include<stdio.h>
void main()
{float cp,sp,p,x ;	
printf("enter the cost price of an item-");
scanf("%f",&cp);
printf("enter the selling price of an item-");
scanf("%f",&sp);
if(sp>cp)
	{p=sp-cp;
	x=p/cp*100;
	printf("profit percentage =%3.3f",x);
	printf("%c",'%');
	}
else
	{p=cp-sp;
	x=p/cp*100;
	printf("loss percentage =%3.3f",x);
	printf("%c",'%');
	}
}
