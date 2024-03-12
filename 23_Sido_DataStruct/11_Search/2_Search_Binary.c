#include <stdio.h>

int Search_Binary(int *list , int left , int right , int key){
    int mid;
    while(left <= right){
        mid = (left + right) / 2;
        if(key == list[mid])    return mid;
        else if(key > list[mid])    left = mid + 1;
        else    right = mod - 1;
    }
    return -1;
}