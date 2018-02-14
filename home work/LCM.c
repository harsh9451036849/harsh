#include<stdio.h>
int main()
{
    int a,b,c,h,f;
    printf("enter 2 numbers to find there hcf and lcm\n");
    scanf("%d %d",&a,&b);
    h=a*b;
    if(a>b)
    {
        for(;c!=0;c++)
        {
            c=a%b;
            if (c==0)
            {
            printf("THE HCF OF 2 NUMBERS IS %d\n",b);
            f=h/b;
            printf("THE LCM OF 2 NUMBERS IS %d",f);
            break;
            }
            a=b;
            b=c;
        }

    }
else
{
    for(;c!=0;c++)
    {
        c=b%a;
        if(c==0)
        {
            printf("THE HCF OF 2 NUMBERS IS %d\n",a);
            f=h/a;
            printf("THE LCM OF 2 NUMBERS IS %d`",f);
            break;

        }
        b=a;
        a=c;
    }
}
return 0;
}
