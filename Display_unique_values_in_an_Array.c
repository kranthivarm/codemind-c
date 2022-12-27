#include<stdio.h>
int main()
{
    int n,i,j,count,res=0;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=n;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        if(count==1)
        {
        printf("%d ",a[i]);
        res++;
        }
    }
    if(res==0) printf("-1");
}