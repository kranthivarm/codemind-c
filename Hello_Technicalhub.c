#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int l=strlen(a),i;
    printf("Hello Technicalhub
");
    for(i=0;i<l;i++)
    {
        printf("%c",a[i]);
    }
}