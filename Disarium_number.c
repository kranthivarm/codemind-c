#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,rem,c,sum=0,t;
    scanf("%d",&n);
    m=log10(n)+1;//m is place of number;
    c=n;
    while(c)
    {
        rem=c%10;
        t=pow(rem,m--);
        sum=sum+t;
        c=c/10;
    }
    if(n==sum) printf("True");
    else printf("False");
}




