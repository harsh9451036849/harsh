#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 2 numbers to find there hcf\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
        {
    for(;c!=0;c)
            {
            c=a%b;
            if(c==0)
                {
                printf("%d",b);
                break;
                }
            a=b;
            b=c;
            }
        }
    else
    {
        for(;c!=0;c)
            {
            c=b%a;
            if(c==0)
            {
                printf("%d",a);
                break;
            }
            b=a;
            a=c;
        }

    }
        return 0;
}
