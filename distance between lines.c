#include<stdio.h>
#include<math.h>
float main()
{
	float a,b,c,d,e,g;
	printf("please enter the location cordinates.\nfirst X cordinate then Y cordinate.");
	scanf("%f%f%f%f", &a,&b,&c,&d);
	d=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	printf("%f", d);
return 0.00;
}
