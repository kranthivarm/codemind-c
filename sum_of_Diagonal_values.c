#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n],i,j,sum=0;
    for(i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j||j==n-i-1)sum+=a[i][j];
        }
    }
    printf("%d",sum);
}