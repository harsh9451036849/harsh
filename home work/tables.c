#include<stdio.h>
int main()
{printf("enter the number for the table.\n");
int i,a;
scanf("%d",&a);
    for(i=1;i<11;i++)
    {
        printf("%d*%d=%d\n",a,i,a*i);
    }
}
