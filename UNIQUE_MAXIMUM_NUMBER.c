#include<stdio.h>
int main()
{
    int n,i,j,count;
    scanf("%d",&n);
    int a[n],large=0,res=0;
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
            {
                count++;
            }
        }if(count==1)
        {
            res++;
            if(a[i]>large) large=a[i];
        }
    }
    if(res>0) printf("%d",large);
    else printf("-1");
}