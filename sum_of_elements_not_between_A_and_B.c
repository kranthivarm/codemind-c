#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }int k,l;
    scanf("%d%d",&k,&l);
    int sum=0;
    for(i=0;i<n;i++){
        if(a[i]>=k && a[i]<=l){
            continue;}
            sum=sum+a[i];
        
    }printf("%d",sum);
}