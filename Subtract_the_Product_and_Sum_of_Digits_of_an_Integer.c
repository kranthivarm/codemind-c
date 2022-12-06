#include<stdio.h>
int main(){
    int n,rem,sum=0,pro=1;
    scanf("%d",&n);
    while(n){
        rem=n%10;
        sum=sum+rem;
        pro=pro*rem;
        n=n/10;
    }printf("%d",pro-sum);
}