#include<stdio.h>
void main()
{int i,ar[10000],n,s,flag=0;
printf("enter the number of elements you want to store in array-\n");
scanf("%d",&n);
printf("enter the numbers-\n");
for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
printf("the array you entered is- \n");
for(i=0;i<n;i++)
	printf("%d  ", ar[i]);
for(i=0;i<n;i++)
	ar[i]=ar[i]*ar[i];
printf("\nthe square of each number you entered in array is- \n");
for(i=0;i<n;i++)
	printf("%d  ", ar[i]);
}
