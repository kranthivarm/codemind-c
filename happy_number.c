#include<stdio.h>
int main(){
    int n,rem,sum=0;
    scanf("%d",&n);
  
    while(n)
    {
        rem=n%10;
        sum=sum+rem*rem;
        n=n/10;
        if(n==0 && sum>=10)
        {
            n=sum;
            sum=0;
        }
    }
    if(sum==1||sum==7)
        printf("True");
        else printf("False");
}