#include<stdio.h>
int main()
{
    int n,x,rem;
    scanf("%d",&n);
    x=n;
    while(x%2==0)
    {
        x/=2;
    }
    while(x%3==0)
    {
        x/=3;
    }
    while(x%5==0)
    {
        x/=5;
    }
    if(x==1)printf("Ugly Number");
    else printf("Not Ugly Number");
}