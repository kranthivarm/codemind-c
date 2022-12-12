#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    int sum=0,sum2=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    if(a[i]%2==0){
        sum=sum+a[i];}
        else if(a[i]%2==1){
            sum2=sum2+a[i];}
    }
    printf("%d",abs(sum-sum2));
}