#include <stdio.h>

int prime(int n)
{
    int flag=0,i;
    if(n==0||n==1)
      {flag=1;return flag;}
    for(i=2;i<=n/2;i++)
    { if(n%i==0)
      {flag=1;break;}
    }
    return flag;
}

/*void main()
{ int n,f;
  printf("Enter a number:");
  scanf("%d",&n);
  f=prime(n);
  if(f==0)
    printf("Prime");
  else
    printf("Not Prime");
  
  }*/