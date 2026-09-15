#include<stdio.h>

int main(){
    int n,a,b,c,d,e;
    scanf("%d",&n);
    if(n>=50){
        a=n/50;
        printf("50分:%d\n",a);
        n=n%50;
    }
    if(n>=20){
        b=n/20;
        printf("20分:%d\n",b);
        n=n%20;
    }
    if(n>=10){
        c=n/10;
        printf("10分:%d\n",c);
        n=n%10;
    }
    if(n>=5){
        d=n/5;
        printf("5分:%d\n",d);
        n=n%5;
    }
    if(n>=1){
        e=n/1;
        printf("1分:%d\n",e);
    }
}