#include<stdio.h>
int main()
{
    int n,i,x,rev=0,rem,temp1,temp2;
    scanf("%d",&n);
    for(i=n-1;i>0;i--)
    {
        x=i;
        rev=0;
        while(x!=0)
        {
            rem=x%10;
            rev=rev*10+rem;
            x/=10;
        }
        if(rev==i)
        {
            temp1=i;
            break;
        }
    }
    for(i=n+1;i<=n+100;i++)
    {
        x=i;
        rev=0;
        while(x!=0)
        {
            rem=x%10;
            rev=rev*10+rem;
            x/=10;
        }
        if(rev==i)
        {
            temp2=i;
            break;
        }
    }
    if((n-temp1)>(temp2-n))printf("%d",temp2);
    else if((n-temp1)<(temp2-n))printf("%d",temp1);
    else printf("%d %d",temp1,temp2);
}