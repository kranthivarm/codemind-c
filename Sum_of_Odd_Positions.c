#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i%2==1){
            sum=sum+a[i];
        }
    }printf("%d",sum);
}