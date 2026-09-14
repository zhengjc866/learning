#include<stdio.h>

int num[4],z,sum=0;

int maxnum(){
    for(int i=1;i<5;i++){
        if(num[i-1]>num[i]){
            z=num[i];
            num[i]=num[i-1];
            num[i-1]=z;
        };
    };
    return num[4];
}

int minnum(){
    for(int i=1;i<5;i++){
        if(num[i-1]<num[i]){
            z=num[i];
            num[i]=num[i-1];
            num[i-1]=z;
        };
    };
    return num[4];
}

int main()
{
    for(int i=0;i<5;i++){
        scanf("%d",&num[i]);
        sum=sum+num[i];
    };
    int max=maxnum(),min=minnum();
    printf("max=%d min=%d avg=%d",max,min,sum/5);
    return 0;
}