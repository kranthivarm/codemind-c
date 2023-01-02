#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int rem,count,res=0;
    for(i=0;i<n;i++)
    {
        count=0;
        int x=a[i];
         while(x)
         {
             rem=x%10;
             count++;
             x=x/10;
         }
         if(count%2==0) res++;
    }
    printf("%d",res);
}