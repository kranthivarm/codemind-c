#include<stdio.h>
int main(){
    int n,rem,rev=0;
    scanf("%d",&n);
    int dupN=n;
    while(n){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }if(dupN==rev){
        printf("True");
    }
    else printf("False");
}