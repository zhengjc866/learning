#include<stdio.h>

int num[6],z,sum=0;

int minnum(){
    for(int i=1;i<6;i++){
        if(num[i-1]<num[i]){
            z=num[i];
            num[i]=num[i-1];
            num[i-1]=z;
        };
    };
    return num[5];
}

int main()
{
    for(int i=0;i<6;i++){
        scanf("%d",&num[i]);
        sum=sum+num[i];
    };
    printf("小组得分：");
    for(int i=0;i<6;i++){
        printf("%d ",num[i]);
    };
    printf("\n");
    int min=minnum();
    printf("得分总和：%d\n最低分：%d\n",sum,min);
    return 0;
}