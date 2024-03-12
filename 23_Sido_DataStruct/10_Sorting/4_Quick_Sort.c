#include <stdio.h>

#define SWAP(x,y,z) ((z=x),(x=y),(y=z))

int partition(int *list, int left, int right){
    int pivot , temp;
    int low , high;
    low = left;
    high = right+1;
    pivot = list[low];
    do{
        do{
            low++;
        }while(low <= high && pivot > list[low]);
        do{
            high--;
        }while(low<=high && pivot < list[high]);
        if(low<high)    SWAP(list[low],list[high],temp);
    }while(low<right);
    SWAP(list[left],list[high],temp);
    return high;
}

void quick_sort(int *list , int left , int right){
    if(left < right){
        int q = partition(list,left,right);
        quick_sort(list,left,q-1);
        quick_sort(list,q+1,right);
    }
}