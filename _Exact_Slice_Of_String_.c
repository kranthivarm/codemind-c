#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",&a);
    int x,y,i;
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        printf("%c",a[i]);
    }
}