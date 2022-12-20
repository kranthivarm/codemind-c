#include<stdio.h>
#include<math.h>
int main(){
    int n,sq,x=1;
    scanf("%d",&n);
     sq=n*n;
int temp=n;
    while(n>0)
    {
        x=x*10;
        n=n/10;
    }
    if(sq%x==temp) printf("Automorphic Number");
    else printf("Not an Automorphic Number");
}