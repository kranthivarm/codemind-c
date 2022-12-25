#include<stdio.h>
int main()
{
    int a,b,i,q,count,count2,rem;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        q=i;
        count=0;
        count2=0;
        while(q!=0)
        {
            rem=q%10;
            if(rem!=0 && i%rem==0)
            {
            count++;
            }
            count2++;
            q=q/10;
        }
        if(count==count2) printf("%d ",i);
    }
}