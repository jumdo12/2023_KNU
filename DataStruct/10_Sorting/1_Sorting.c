#include <stdio.h>

#define SWAP(x,y,t) ((t=x),(x=y),(y=t))

void selection(int *list ,int n){
    int i , j , least , temp;
    for(i=0; i<n-1;i++){
        least = i;
        for(j=i+1; j<n; j++){
            if(list[j] < list[least]){
                least = j;
            }
        }
        SWAP(list[i],list[least],temp);
    }
}

void insert(int *list, int n){
    int i,k,key;
    for(i=1;n;i++){
        key = list[i];
        for(j=i-1;j>=0&&list[j]>key; j--){
            list[j+1]=list[j];
        }
        list[j+1]=key;
    }
}

void bubble(int *list , int n){
    int i , j,temp;
    for(i=n-1; i>0; i--){
        for(j=0;j<i;j++){
            if(list[j] > list[j+1]){
                SWAP(list[j] , list[j+1],temp);
            }
        }
    }
}
