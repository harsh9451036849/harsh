#include<stdio.h>
int main()
{
    int a,b,c=1;
    printf("enter a number to find its factorial\n");
    scanf("%d",&a);
    for(b=a;b!=0;b--)
    {
        c=c*(b);

    }
 printf("%d", c);
}
