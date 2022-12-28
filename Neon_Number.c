#include<stdio.h>
int main()
{
    int n,rem,sum=0,sq;
    scanf("%d",&n);
    sq=n*n;
    int x=sq;
    while(x>0)
    {
        rem=x%10;
        sum=sum+rem;
        x=x/10;
    }
    if(sum==n) printf("Neon Number");
    else printf("Not Neon Number");
}