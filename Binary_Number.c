#include<stdio.h>
int main()
{
    int n,i,j,p=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)p*=2;
    int a[n],temp,rem;
    for(i=0;i<p;i++)
    {
        temp=i;
        for(j=n-1;j>=0;j--)
        {
            rem=temp%2;
            temp/=2;
            a[j]=rem;
        }
        for(j=0;j<n;j++)printf("%d",a[j]);
        printf("
");
    }
}