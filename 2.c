#include<stdio.h>
int main(){
    for(int i=0;i<=1100;i++){
        if(i%2==0){
            printf("%d ",i);
        };
        if(i%10==0){
            printf("\n");
        };
    };
}