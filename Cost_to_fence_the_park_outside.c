#include<stdio.h>
int main()
{
    int l,b,w,c,cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    cost=((l+2*w)*(b+2*w)-l*b)*c;
    printf("%d",cost);
}