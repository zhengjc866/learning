#include <stdio.h>

int main(){
    int n,k;
    scanf("%d", &n);
    int m=n/2;
    for(int i=0;i<n;i++){
        if(i<=m){
            k=m-i;
        }
        else{
            k=i-m;
        }
        int x=n-2*k;
        for(int j=0;j<k;j++){
            printf(" ");
        }
        for(int j=0;j<x;j++){
            printf("*");
        }
        printf("\n");
    }
}