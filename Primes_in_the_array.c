#include<stdio.h>
int prime(int x);
int main()
{
    int n,i,j,cnt=0;
    scanf("%d",&n);
    int a[n],x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
           x=a[i];
           x=prime(x);
           if(x==1)cnt++;
    }
    printf("%d",cnt);
}
int prime(int x)
{
    int i,cnt=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)cnt++;
    }
    if(cnt==2) return 1;
    else return 0;
}