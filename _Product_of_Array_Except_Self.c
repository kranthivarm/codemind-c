#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int pro=1;
        for(j=0;j<n;j++)
        {
            if(i==j)continue;
            pro=pro*a[j];
        }
        printf("%d ",pro);
    }
}