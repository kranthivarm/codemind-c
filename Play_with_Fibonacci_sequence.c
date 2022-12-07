#include<stdio.h>
int main(){
    int n,a=0,b=1,i,count=0,t;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++){
        t=a+b;
        printf("%d ",t);
        a=b;
        b=t;
      
   
    }
}