#include <stdio.h>

void merge(int *list, int left , int mid , int right){
    int i,j,k;
    i = left;
    j = mid+1;
    k = left;
    while(i<=mid&&j<=right){
        if(list[i] < list[j]){
            solted[k++] = list[i++];
        }
        else{
            solted[k++] = list[j++];
        }
    }
    while(i<=mid){
        sorted[k++]=list[i++];
    }
    while(j<=right){
        sorted[k++]=list[j++];
    }
    for(int l = left; l <= right; l++){
        list[l]=sorted[l];
    }
}

void merge_sort(int *list , int left, int right){
    int mid;
    if(left < right){
        mid = (left+right)/2;
        merge_sort(list,left,mid);
        merge_sort(list,mid+1,right);
        merge(list,left,mid,right);
    }
}