#include<stdio.h>
int main()
{
    int n,x,rem,sum;
    scanf("%d",&n);
    x=n;
    sum=n;
    while(sum/10>0)
    {
        sum=0;
        while(x!=0)
        {
            rem=x%10;
            sum+=rem;
            x/=10;
        }
        x=sum;
    }
    printf("%d",sum);
}