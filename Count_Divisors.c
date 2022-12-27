#include<stdio.h>
int main()
{
    int i,r,k,d,n,count=0;
    scanf("%d%d%d",&i,&r,&k);
    for(n=i;n<=r;n++)
    {
        if(n%k==0) count++;
    }
    printf("%d",count);
}