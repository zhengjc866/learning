#include<stdio.h>

int main(){
    float k1,k2;
    scanf("%f %f",&k1,&k2);
    float sum=k1*5.8+k2*4.2;
    float avg=sum/(k1+k2);
    printf("总花费：%.2f\n平均花费：%.2f\n",sum,avg);
    return 0;
}