#include<stdio.h>
int main(){
    float n,i;
    scanf("%f",&n);
    float sum=0.0;
    for(i=1;i<=n;i++){
        sum=sum+(1/i);
    }printf("%.2f",sum);
}