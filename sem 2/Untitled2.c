#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int a,b[200],i=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
        double c=0,d=0,e=0;
              for(i=0;i<a;i++)
              {
                  if(b[i]<0)
                  { c++;
                  }
               else if(b[i]==0)
                   {   d++;

                   }

             else if(b[i]>0)
                 { e++;

                 }
              }
              printf("%lf\n%lf\n%lf\n",c/a,d/a,e/a);
    return 0;
}
