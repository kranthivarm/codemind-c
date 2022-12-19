#include<stdio.h>
int main(){
    int n,i;char ch;
    scanf("%d",&n);
    int count=0;
    for(ch='A';ch<='Z';ch++){
        for(i=1;i<=n;i++){
            printf("%c ",ch);
        }printf("
");
        count++;
        if(count==n)
     break;
}}