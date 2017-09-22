#include<stdio.h>
int main()
{    clrscr();
    int n,a[n];
    scanf("enter the no of student%d",&n);
   printf("the marks are")
  for(int i=0;i<n;i++)
    {
      scanf(%d,&a[i]);
}
max=a[0];
min=a[0];
for(int i=1;i<n;i++)
{
if(a[i]>max)
{
   max=a[i];
}
if(a[i]<min)
{
  min=a[i];
}
}
printf("the max value is\n%d",max);	
printf("the min value is\n%d",min);	
getch();
}
