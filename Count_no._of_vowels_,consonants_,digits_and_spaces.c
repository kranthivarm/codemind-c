#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int l=strlen(a),i,count=0,
    count1=0,count2=0,count3=0;
    for(i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        count++;
        else if(a[i]=='0'||a[i]=='1'||a[i]=='2'
        ||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'
        ||a[i]=='7'||a[i]=='8'||a[i]=='9')
        count1++;
        else if(a[i]==' ') count2++;
        else count3++;
    }
    printf("Vowels: %d
Consonants: %d
",count,count3);
    printf("Digits: %d
White spaces: %d
",count1,count2);
}