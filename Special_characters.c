#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int l=strlen(s),i,max;
    int odd[l],eve[l],val,e=-1,o=-1,spch=0;
    for(i=0;i<l;i++)
    {
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
        {
            continue;
        }
        else if(s[i]>=48&&s[i]<=57)
        {
            val=s[i]-'0';
            if(val%2==0)eve[++e]=val;
            else odd[++o]=val;
        }
        else spch++;
    }
    if(spch%2==0)
    {
        if(e>o)max=e;
        else max=o;
        for(i=0;i<=max;i++)
        {
            if(i<=e)printf("%d",eve[i]);
            if(i<=o)printf("%d",odd[i]);
        }
    }
    else
    {
        if(e>o)max=e;
        else max=o;
        for(i=0;i<=max;i++)
        {
            if(i<=o)printf("%d",odd[i]);
            if(i<=e)printf("%d",eve[i]);
        }
    }
    
}