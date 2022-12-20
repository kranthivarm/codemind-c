#include<stdio.h>
int main(){
    int n,i,j,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
            
        }
    for(x=1;x<=(2*i-1);x++)
    {
        printf("%d",i);
    }

    printf("
");
        
    }
}