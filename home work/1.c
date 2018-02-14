#include<stdio.h>
#include<math.h>
int main()
{
    printf("enter your age");
    int a;
    scanf("%d",&a);
    if(a<0)
        printf(" invalid age ");
    if(a>18)
        printf("   your are adult  ");
    else if(a>=13&&a<18)
        printf( "  teenager ");

}
