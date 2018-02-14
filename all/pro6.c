#include<stdio.h>
#include<string.h>

void main()
{int x;
char word[50],ch,i,j;
printf("enter a word -");
scanf("%s",word);
printf("entered word in alphabetical order is- ");
x=strlen(word);
for(i=0;i<x;i++)
	{for(j=0;j<x-i-1;j++)
		{if(word[j]>word[j+1])
			{ch=word[j];
			word[j]=word[j+1];
			word[j+1]=ch;
			}
		}
	}
printf("%s",word);
}
