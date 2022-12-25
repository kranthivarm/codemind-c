#include<stdio.h>
int main()
{
    int n,fac,i,sum=0;
    scanf("%d",&n);
    int c=n,rem;
    while(n!=0)
    {
        rem=n%10;
        fac=1;
        for(i=1;i<=rem;i++)
        {
            fac=fac*i;
        }
        sum=sum+fac;
        n=n/10;
    }
    if(sum==c) printf("The number %d is a strong number",c);
    else printf("The number %d is not a strong number",c);
}