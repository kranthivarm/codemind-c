#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,b=0,a=0,l=0,o=0,n=0,len=strlen(s),min;
    for(i=0;i<len;i++)
    {
        if(s[i]=='a')a++;
        else if(s[i]=='b')b++;
        else if(s[i]=='l')l++;
        else if(s[i]=='o')o++;
        else if(s[i]=='n')n++;
    }
    l/=2;
    o/=2;
    min=n;
    if(a<min) min=a;
    if(b<min) min=b;
    if(l<min) min=l;
    if(o<min) min=o;
    printf("%d",min);
}