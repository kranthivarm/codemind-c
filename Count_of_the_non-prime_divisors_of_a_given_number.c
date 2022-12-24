#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int count,count1=0;
    for(i=1;i<=n;i++)
    {
        count=0;
        if(n%i==0)
        {
        for(j=1;j<=n;j++)
        {
            if(i%j==0) count++;
        }
            if(count!=2)
            {
                count1++;
            }
        }
    }
        printf("%d",count1);
}