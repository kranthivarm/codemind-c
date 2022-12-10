#include<stdio.h>
int main(){
    int n,sqn,rem,rev=0,sqrev;
    scanf("%d",&n);
    sqn=n*n;
  
    while(n){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    sqrev=rev*rev;
    int rem2,rev2=0;
    while(sqrev){
        rem2=sqrev%10;
        rev2=rev2*10+rem2;
        sqrev=sqrev/10;
    }
    if(rev2==sqn)
        printf("True");
        else printf("False");
}