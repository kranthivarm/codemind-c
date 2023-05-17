#include<stdio.h>
int main()
{
    int n,i,pro=1,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(n>10&&i==n/1)break;
        if(i*(i+1)==n)
        {
            cnt=1;
            break;
        }
    }
    if(cnt==1)printf("YES");
    else printf("NO");
}