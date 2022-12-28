#include<stdio.h>
int main()
{
    int n,m,i,rem,j,rev;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++){
        int j=i,rev=0;
        while(j)
        {
            rem=j%10;
            rev=rev*10+rem;
            j=j/10;
        }
        if(rev==i) printf("%d ",i);
    }
}