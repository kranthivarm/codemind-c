#include<stdio.h>
int main()
{
    int n,m,i,j,sum,rmax,cmax;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
        if(i==0)rmax=sum;
        if(sum>rmax)rmax=sum;
    }
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=a[j][i];
        }
        if(i==0)cmax=sum;
        if(sum>cmax)cmax=sum;
    }
    if(cmax>rmax)printf("%d",cmax);
    else printf("%d",rmax);
}