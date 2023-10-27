#include<stdio.h>

main()
{
    int l,r,i,j;

    for(l=5;l>=1;l--)
    {
     for(r=1;r<=l;r++)
     {
        printf("%d",r);
     }
      printf("\n");
    }
      for(i=2;i<=5;i++)
     {
      for(j=1;j<=i;j++)
      {
        printf("%d",j);
      }
      printf("\n");
     }
    }
