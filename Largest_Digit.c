#include<stdio.h>
int main()
{
    int n,rem,large=0;
    scanf("%d",&n);
    int m=n;
    while(m)
    {
        rem=m%10;
        if(rem>large)
        {
        large=rem;
        }
        m=m/10;
    }
    printf("%d",large);
}