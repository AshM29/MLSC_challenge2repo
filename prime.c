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


