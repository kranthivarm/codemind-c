#include<stdio.h>
int main(){
    float u,c,cost;
    scanf("%f",&u);
    if(u<199){
        c=u*1.2;}
        else if(u>=200 && u<400){
            c=u*1.5;    }
            else if(u>=400 && u<600){
                c=u*1.8;}
                else if(u>=600){
                    c=u*2.0;}
   if(c>400){
       cost=0.15*c+c;
       printf("%.2f",cost);
   }
   else if(c<400){
       cost=c+100;
       printf("%.2f",cost);
   }
}