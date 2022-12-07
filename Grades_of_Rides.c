#include<stdio.h>
int main(){
  int hf,spif,spef;
  scanf("%d%d%d",&hf,&spif,&spef);
if(hf>50 && spif>60 && spef>100) printf("10");
else if(hf>50 && spif>60 && spef<=100) printf("9");
else if(hf<=50 && spif>60 && spef>100) printf("8");
else if(hf>50 && spif<=60 && spef>100) printf("7");
else if(hf>50 || spif>60 || spef>100) printf("6");
else if(hf<=50 && spif<=60 && spef<=100) printf("5");
}