#include <stdio.h>
#include "prime.c"

void main()
{    int i,flag;
    for(i=2;i<=100;i++)
    { flag=prime(i);
      if(flag==0)
        printf("%d is Prime \n",i);
    }
}
