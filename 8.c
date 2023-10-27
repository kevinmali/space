#include<stdio.h>

main()
{
    int l,r,i,j,s;

    for(l=1;l<=5;l++)
    {
    for(r=1;r<=l;r++)
    {
        printf("%d",r);
    }
    for(i=l;i<5;i++)
    {
        printf(" ");
    }
    for(s=l;s<5;s++)
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
