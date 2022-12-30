#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    scanf("%d",&n);
    int c=n;
    while(c)
    {
        rem=c%10;
        rev=rev*10+rem;
        c=c/10;
    }
    printf("%d",rev);
}