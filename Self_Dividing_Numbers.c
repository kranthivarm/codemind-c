#include<stdio.h>
int main()
{
    int n,m,i,temp,cnt,rem;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        temp=i;
        while(temp!=0)
        {
            cnt=0;
            rem=temp%10;
            if(rem!=0)
            {
                if(i%rem!=0)
                {
                    cnt++;
                    break;
                }
                temp/=10;
            }
            else{
                cnt++;
                break;
            }
        }
        if(cnt==0)printf("%d ",i);
    }
}