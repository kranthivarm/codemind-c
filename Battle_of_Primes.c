#include<stdio.h>
int main(){
    int n,j,i,m;
    scanf("%d%d",&n,&m);
    for(i=1;i<(n+m);i++){
        int count=0;
        for(j=1;j<=(n+m+i);j++){
            if((n+m+i)%j==0){
                count++;}}
                if(count==2){
                printf("%d",i);
                break;}
    }
}