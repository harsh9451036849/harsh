#include<stdio.h>
int display(int a[],int b[],int n)
{	int i;
	printf("Set A elements are\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\nSet B elements are\n");
	for(i=0;i<n;i++)
	printf("%d\t",b[i]);
	return 0;
}
int main()
{
	int n,e;	
	printf("enter the number of elements in an setA\n");
	scanf("%d",&n);	
	int m,a[n],i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the number of elements in a setB");
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	printf("enter 1 to display the numbers in set A and set B");
	scanf("%d",&e);
				switch(e)
					{case 1: display(a,b,n);
						break; 
					default: printf("not a vaild choice"); 
						break;}
	return 0;
}

