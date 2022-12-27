#include<stdio.h>
int main()
{
    int n,i,j,count,ducount=0;
    scanf("%d",&n);
    int a[n],x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        if(count>ducount)
        {
        ducount=count;
        x=a[i];
        }
    }
    printf("%d",x);
}