#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],count=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        count++;
    }
    if(count==n)
    printf("True");
    else printf("False");
}