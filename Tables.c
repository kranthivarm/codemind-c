#include<stdio.h>
int main(){
    int n,l,i;
    scanf("%d%d",&n,&l);
    for(i=1;i<=l;i++){
        if(i%2!=0){
        printf("%d x %d = %d
",n,i,n*i);}
    }
}