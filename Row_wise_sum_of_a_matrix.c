#include<stdio.h>
int main()
{
    int n,m,i,j,sum;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
        printf("%d ",sum);
    }
}