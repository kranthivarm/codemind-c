#include<stdio.h>
int main(){
    int n,i,x,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int fact=1;
        scanf("%d",&x);
        for(j=1;j<=x;j++){
            fact=fact*j;
        }printf("%d
",fact);}
    
}