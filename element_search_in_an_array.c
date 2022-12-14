#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    int k,count=0;
    scanf("%d",&k);
 for(i=0;i<n;i++){   
if(k==a[i]){
    count++;}
 }if(count>=1){
    printf("True");
}
else printf("False");
}