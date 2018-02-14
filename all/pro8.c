#include<stdio.h>
#include<string.h>
#include<string.h>
void main()
{char x,string1[20],string2[20],dummy;
int ch,sl;
do
	{printf("1.cocatinate string 2 to string 1\n");	
	printf("2.find lenght a given string\n");
	printf("3.compare two strings\n");
	printf("4.copy string 2 to string 1\n");
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
		{case 1:printf("\nenter string 1\n");
			scanf("%s",string1);
			printf("\nenter string 2\n");
			scanf("%s",string2);
			strcat(string1,string2);
			printf("\nthe concatinated string will be\n");
			printf("%s",string1);
			break;

		case 2:printf("\nenter a string \n");
			scanf("%s",string1);
			sl=strlen(string1);
			printf("lenth of the given string is - %d",sl);
			break;
		
		case 3:printf("\nenter string 1\n");
			scanf("%s",string1);
			printf("\nenter string 2\n");
			scanf("%s",string2);
			if(strcmp(string1,string2)==0)
			printf("\nthe two entered strings are same\n");
			else 
			printf("\nthe two entered strings are not same\n");
			break;
		
		case 4:printf("\nenter string 1\n");
			scanf("%s",string1);
			printf("\nenter string 2\n");
			scanf("%s",string2);
			strcpy(string1,string2);
			printf("\nafter copying string1 will be\n");
			printf("%s",string1);
			printf("\nafter copying string2 will be\n");
			printf("%s",string2);
			break;
		}
	printf("\ndo you want to do that again\n");
	scanf("%c",&dummy);
	scanf("%c",&x);
	}while(x=='y'||x=='Y');
}
