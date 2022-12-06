#include<stdio.h>
int main(){
    int n,i,x;
    for(i=1;i<=50;i++){
        scanf("%d",&n);
        x=n*n;
        if(n==-1) break;
        else printf("%d
",x);
    }
}