#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int l=strlen(a),i;
    for(i=0;i<l;i++)
    {
        if(a[i]=='.') 
        printf("[.]");
        else printf("%c",a[i]);
    }
}