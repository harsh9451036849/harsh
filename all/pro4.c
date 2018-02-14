#include<stdio.h>
void main()
{int i,ar[10000],n,s,flag=0;
printf("enter the number of elements you want to store in array-\n");
scanf("%d",&n);
printf("enter the numbers-\n");
for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
printf("enter the number you want to search in array-\n");
scanf("%d",&s);
for(i=0;i<n;i++)
	{if(ar[i]==s)
		{printf("element found at position - %d",i+1);
		flag++;
		}
	}
if(flag==0)
	printf("element not found");
}
