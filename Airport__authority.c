#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    int sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<=t)
        {
            sum1=sum1+1;
        }
        else sum2=sum2+2;
    }
    printf("%d",sum1+sum2);
}