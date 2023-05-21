#include<stdio.h>
int main()
{
    int n,i,j,rem,p=1,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)p*=2;
    for(i=0;i<p;i++)
    {
        temp=i;
        for(j=n-1;j>=0;j--)
        {
            rem=temp%2;
            a[j]=rem;
            temp/=2;
        }
        for(j=0;j<n;j++)printf("%d",a[j]);
        printf("
");
    }
}