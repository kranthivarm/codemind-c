#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]!=0) printf("%d ",a[i]);
        else{
            count++;
        }
    }
    for(i=1;i<=count;i++)
    {
        printf("0 ");
    }
}