#include<stdio.h>

struct account
{
    int accountno[100];
    char name[30];
    int pcode;
    char atype[20];
    char intbank[3];
    long balance;

};
int main()
{
    int n,i,b,flag=10;
    char dummy;
    printf("enter the number of account users");
    scanf("%d",&n);
    struct account s[n];
    for(i=0;i<n;i++)
    {
        printf("enter the name of user\t");
        scanf("%s",s[i].name);
        printf("enter the account no.\t");
        scanf("%d",&s[i].accountno);
        printf("enter the balance amount \t");
        scanf("%ld",&s[i].balance);
        printf("internet banking available?\t");
        scanf("%s",&s[i].intbank);
        printf("enter pin code\t");
        scanf("%d",&s[i].pcode);
        printf("enter the type of account\t");
        scanf("%s",s[i].atype);
        //scanf("%c",&dummy);
    }
   do{ printf("enter 1 to know the type of customer \n enter 2 to print customer available for internet banking \n enter 3 to check the location of customer\n enter 4 to sort names by account type\n");
    scanf("%d",&b);
    switch(b)
    {
        case 1:    for(i=0;i<n;i++)
    {
        if(s[i].balance>1000000)
          {
              printf("golden customer\n");
              printf("%s\n",s[i].name);
        }
      else if(s[i].balance<1000000&&s[i].balance>500000)
        {printf("silver customer\n");
        printf("%s\n",s[i].name);
        }
       else if (s[i].balance<500000)
        {printf("general customer\n");}
    }
        break;
        case 2:  for(i=0;i<n;i++)
        {
           // printf("ab");
            if(strcmp(s[i].intbank,"yes")==0)
                printf("%s\n",s[i].name);
        }
        break;
        case 3: printf("enter the pincode you want to search");
                int cd;
                scanf("%d",&cd);
             for (i=0;i<n;i++)
        {
            if (s[i].pcode==cd)
            printf("%s\n",s[i].name);
        }
        break;
        case 4:for (i=0;i<n;i++)
        {
            if(strcmp(s[i].atype,"deposit")==0)
                printf("deposit type  %s\n",s[i].name);
             if(strcmp(s[i].atype,"savings")==0)
                printf("savings type  %s\n",s[i].name);
              if(strcmp(s[i].atype,"recurring")==0)
              printf("recurring type  %s\n",s[i].name);
        }
        break;
        default: printf("no result found");
        break;
    }
    printf("press 0 to exit");
    scanf("%d",&flag);
    } while (flag!=0);
    return 0;
}
