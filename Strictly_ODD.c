#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],count=0,count2=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==1) count++;
    }
    for(i=0;i<n;i++){
        if(a[i]%2==1 && i%2==1)
        count2++;}
        if(count2==count)
        printf("True");
        else printf("False");
}