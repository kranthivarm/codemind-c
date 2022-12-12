#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],small;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=0;i<n;i++)
    {
        if(small>a[i]){
            small=a[i];
        }
    }printf("%d",small);
}