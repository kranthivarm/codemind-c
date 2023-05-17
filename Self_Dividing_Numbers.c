#include<stdio.h>
int main()
{
    int a,b,i,x,cnt,rem;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        x=i;
        cnt=0;
        while(x!=0)
        {
            rem=x%10;
            if(rem!=0){
            if(i%rem!=0)
            {
                cnt++;
                break;
            }}
            else cnt++;
            x/=10;
        }
        if(cnt==0) printf("%d ",i);
    }
}