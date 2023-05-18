#include<stdio.h>
int prime(int x);
int main()
{
    int n,i,j,x;
    scanf("%d",&n);
    int a[n];
    float sum=0.0,avg,cnt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        x=a[i];
        x=prime(x);
        if(x==1) 
        {
            sum+=a[i];
            cnt++;
        }
    }
    avg=sum/cnt;
    printf("%.2f",avg);
}
int prime(int x)
{
    int i,j,cnt=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0) cnt++;
    }
    if(cnt==2)return 1;
    else return 0;
}