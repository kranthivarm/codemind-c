#include<stdio.h>
int main(){
    int n,rem,count=0,count2=0;
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
         n=n/10;
        if(rem%2==0)
            count++;
           else count2++;
        }
    if(count>0 && count2==0)printf("Even");
    else if(count2>0 && count==0)printf("Odd");
    else if(count>0 && count2>n) printf("Mixed");
}