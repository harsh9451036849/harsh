#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int a,i,j,x;
    scanf("%d",&a);
    int b[a],c[5];
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<=5;i++)
    { c[i] = 0;}

    for(i=0;i<a;i++)
    {
        if(b[i]==1)
            c[1]+=1;
        else if(b[i]==2)
            c[2]+=1;
        else  if(b[i]==3)
            c[3]+=1;
        else  if(b[i]==4)
            c[4]+=1;
        else  if(b[i]==5)
            c[5]+=1;

    }

  if(c[1]>c[2]&&c[1]>c[3]&&c[1]>c[4]&&c[1]>c[5])
  {
      printf("1");
  }
  else if(c[2]>c[1]&&c[2]>c[3]&&c[2]>c[4]&&c[2]>c[5])
  {
      printf("2");
  }
   else if(c[3]>c[1]&&c[3]>c[2]&&c[3]>c[4]&&c[3]>c[5])
   {
       printf("3");
   }
    else if(c[4]>c[1]&&c[4]>c[2]&&c[4]>c[3]&&c[4]>c[5])
    {
        printf("4");
    }
    else printf("5");
}
