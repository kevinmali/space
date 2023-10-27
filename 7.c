#include<stdio.h>

main()
{
    int l,r,i,j,s;

    for(l=5;l>=1;l--)
    {
    for(r=1;r<=l;r++)
    {
        printf("%d",r);
    }
    for(i=5;i>l;i--)
    {
        printf(" ");
    }
    for(s=5;s>l;s--)
    {
        printf(" ");
    }
        for(j=l;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
