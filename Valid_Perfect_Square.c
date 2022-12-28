#include<stdio.h>
int main()
{
    int t,j,i,count;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        count=0;
        for(j=1;j<=a[i]/2;j++)
        {
            if(a[i]==j*j){
            count++;
            break;
            }
        }
        if(count>0) printf("True
");
        else printf("False
");
    }
}