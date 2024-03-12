#include <stdio.h>

int seq_serch(int *list, int low , int high, int key){
    int i;
    for(i=low;i<=high;i++){
        if(list[i] == key)  return list[i];
    }
    return -1;
}