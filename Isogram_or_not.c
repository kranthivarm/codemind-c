#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int l=strlen(s),i,j,cnt,res=0;
    for(i=0;i<l;i++)
    {
        cnt=0;
        for(j=0;j<l;j++)
        {
            if(i!=j&&s[i]==s[j])
            {
                cnt++;
                break;
            }
        }
        if(cnt>0)
        {
            res++;
            break;
        }
    }
    if(res==0)printf("True");
    else printf("False");
}