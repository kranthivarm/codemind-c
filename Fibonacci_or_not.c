#include<stdio.h>
int main(){
    int n,a=0,b=1,c,i,count=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        if(a==n){
           count++;
           break;
        }
    }
    if(count>0)printf("True");
    else printf("False");
}