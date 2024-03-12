#include <stdio.h>

void insert(int *list , int first , int last , int gap){
    int i,j,key;
    for(i=first+gap;i<=last;i+=gap){
        key = list[i];
        for(j=i-gap; j>=first&&list[j]>key; j-=gap){
            list[j+gap] = list[j];
        }
        list[j+gap] = key;
    }
}

void shell_sort(int *list, int n){
    for(int gap = n/2; gap>=0; gap/=2){
        for(int i=0; i<gap; i++){
            insert(list,i,n-1,gap);
        }
    }
}