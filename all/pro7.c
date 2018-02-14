#include<stdio.h>
void main()
{char name[50];
int i=0,x=0;
printf("enter name of the person-\n");
scanf("%[^\n]",name);
printf("name of the person without middles name is-\n");
while(name[i]!='\0')
	{if(name[i]==' ')
		x++;
	if(x!=1)
	printf("%c",name[i]);
	i++;
	}
}
