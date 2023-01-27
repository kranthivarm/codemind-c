#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int i,j,l=strlen(a);
    int count,res=0;
    for(i=0;i<l;i++)
    {
        count=0;
        for(j=0;j<l;j++)
        {
            if(a[i]==a[j]) count++;
        }
        if(count==1){
            res++;}
    }
    if(res==0) printf("-1");
    else
    {
        for(i=0;i<l;i++)
    {
        count=0;
        for(j=0;j<l;j++)
        {
            if(a[i]==a[j]) count++;
        }
        if(count==1){
            printf("%d",i);
            break;}
    }
    }
}    