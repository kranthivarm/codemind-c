#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int a[x][y],i,j,rsum=0,csum=0,rlarge=0,clarge=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<x;i++)
    {
        rsum=0;
        for(j=0;j<y;j++)
        {
            rsum=rsum+a[i][j];
        }
        if(rlarge<rsum) rlarge=rsum;
    }
    for(i=0;i<x;i++)
    {
        csum=0;
        for(j=0;j<x;j++)
        {
            csum=csum+a[j][i];
        }
        if(clarge<csum) clarge=csum;
    }
    if(rlarge>clarge) 
    printf("%d",rlarge);
    else
    printf("%d",clarge);
}