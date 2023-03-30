#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[1000];
    scanf("%s%s",s1,s2);
    int i,j,l1=strlen(s1),l2=strlen(s2);
    int x,y,count;
    for(i=0;i<l1;i++)
    {
        if(s1[i]=='A') x=i;
        else if(s1[i]=='B')y=i;
    }
    if (x>y)count=1;
    else count=0;
    for(i=0;i<l2;i++)
    {
        if(s2[i]=='A')x=i;
        else if(s2[i]=='B')y=i;
    }
    if(count==1 && x>y) printf("Yes");
    else printf("No");
}